#include "esp_file_helper.h"
#include "sio.h"
#include "sio_memory_card.h"

#include "esp_logging.h"

#include <esp_log.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <stdint.h>
#include <stdio.h>

namespace esp_sio_dev
{
  FILE *mc_file;
  bool mc_sector_uncommitted[1024];
  bool mc_hard_committed = true;
  int rw_fail_count = 0;

  param_mc_write myparam;

  static void Task_HardCommit(void *params);

  void Create_Write_Task(void *params)
  {
    xTaskCreatePinnedToCore(Task_HardCommit, "sd_write_task_core_0", 1024 * 10, params, 2, NULL, 0);
  }

  void LoadCardFromFile(char *filepath, void *destination)
  {
    bool old_mc_status = sio::memory_card_enabled;
    sio::memory_card_enabled = false;

    ESP_LOGI(kLogPrefix, "LoadCardFromFile(%s)\n", filepath);
    mc_file = fopen(filepath, "r+");
    uint8_t *dest = (uint8_t *)destination;

    long file_size;

    if (!mc_file)
    {
      ESP_LOGE(kLogPrefix, "Error opening file!\n");
      sio::memory_card_enabled = old_mc_status;
      return;
    }
    else
    {
      fseek(mc_file, 0, SEEK_END);
      file_size = ftell(mc_file);
      if (file_size <= 0)
      {
        ESP_LOGE(kLogPrefix, "File is empty\n");
        fclose(mc_file);
        sio::memory_card_enabled = old_mc_status;
        return;
      }

      rewind(mc_file);

      if (file_size > (128 * 1024))
        file_size = (128 * 1024);

      fread(dest, 1, file_size, mc_file);
      fclose(mc_file);

      if (file_size < 128 * 1024)
      {
        for (int i = file_size; i < (128 * 1024) - file_size; i++)
        {
          dest[i] = 0x00;
        }
      }
    }

    sio::memory_card::flag = sio::memory_card::Flags::kDirectoryUnread;
    sio::memory_card::GoIdle();
    
    // Make sure MC stays inactive long enough for BIOS to detect change
    // To-do: Adjust lower and test
    // Bios takes roughly 1051ms between MC status polls.
    // Can probably get away with less, but go a bit longer.
    // We need to miss at least one status check to initiate a proper refresh in bios.
    vTaskDelay(1337 / portTICK_PERIOD_MS);
    sio::memory_card_enabled = old_mc_status;
  }

  static void Task_HardCommit(void *params)
  {
    param_mc_write *myparam = (param_mc_write *)params;
    WriteFrame(mc_file, myparam->dest_mc_ram, myparam->dest_sector);
    vTaskDelete(NULL);
  }

  int WriteFrame(FILE *dest_file, void *mc_ram, uint16_t sector)
  {
    if (!dest_file)
    {
      ESP_LOGE(kLogPrefix, "Error opening file!\n");
      return -1;
    }

    if (fseek(dest_file, sector * 128, SEEK_SET) != 0)
    {
      ESP_LOGE(kLogPrefix, "Error seeking file %i!\n", sector);
      return -2;
    }

    if (fwrite(mc_ram, 1, 128, dest_file) != 128)
    {
      ESP_LOGE(kLogPrefix, "Error writing file!\n");
      return -3;
    }

    if (ferror(dest_file))
    {
      ESP_LOGE(kLogPrefix, "Unknown error writing file!\n");
    }

    ESP_LOGI(kLogPrefix, "sector %i written\n", sector);

    return 0;
  }
}