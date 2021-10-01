#ifndef _STORAGE_H
#define _STORAGE_H

#include <stdio.h>

#define MAX_WRITE_FAILURES 4

namespace esp_sio_dev
{
  namespace storage
  {
    extern FILE *mc_file;
    extern int rw_fail_count;
    extern bool ready;
    extern char loaded_file_path[];
    extern char base_path[];

    void Init();
    void Task_Write(void *params);
    void LoadCardFromFile(char *filepath, void *destination);
    int WriteFile();
  } // storage
} // esp_sio_dev

#endif // _STORAGE_H