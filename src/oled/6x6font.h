#ifndef _6X6FONT_H_
#define _6X6FONT_H_

#include <stdint.h>

uint8_t font_6x6[] =
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Space
        0x08, 0x08, 0x08, 0x08, 0x00, 0x08, // !
        0x14, 0x14, 0x00, 0x00, 0x00, 0x00, // "
        0x24, 0x7E, 0x24, 0x24, 0x7E, 0x24, // #
        0x10, 0x3C, 0x50, 0x38, 0x14, 0x78, // $
        0x62, 0x64, 0x08, 0x10, 0x26, 0x46, // %
        0x30, 0x48, 0x30, 0x4A, 0x44, 0x3A, // &
        0x00, 0x08, 0x08, 0x00, 0x00, 0x00, // '
        0x08, 0x10, 0x10, 0x10, 0x10, 0x08, // (
        0x10, 0x08, 0x08, 0x08, 0x08, 0x10, // )
        0x00, 0x14, 0x08, 0x3E, 0x08, 0x14, // *
        0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, // +
        0x00, 0x00, 0x00, 0x08, 0x08, 0x10, // ,
        0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, // -
        0x00, 0x00, 0x00, 0x00, 0x18, 0x18, // .
        0x02, 0x04, 0x08, 0x10, 0x20, 0x40, // Forward slash
        0x3C, 0x46, 0x4A, 0x52, 0x62, 0x3C, // 0
        0x08, 0x18, 0x28, 0x08, 0x08, 0x3E, // 1
        0x3C, 0x42, 0x02, 0x3C, 0x40, 0x7E, // 2
        0x3C, 0x42, 0x0C, 0x02, 0x42, 0x3C, // 3
        0x04, 0x0C, 0x14, 0x24, 0x7E, 0x04, // 4
        0x7E, 0x40, 0x7C, 0x02, 0x42, 0x3C, // 5
        0x3E, 0x40, 0x7C, 0x42, 0x42, 0x3C, // 6
        0x7E, 0x02, 0x04, 0x08, 0x10, 0x10, // 7
        0x3C, 0x42, 0x3C, 0x42, 0x42, 0x3C, // 8
        0x3C, 0x42, 0x42, 0x3E, 0x02, 0x3C, // 9
        0x00, 0x08, 0x00, 0x00, 0x08, 0x00, // :
        0x00, 0x08, 0x00, 0x08, 0x08, 0x10, // ;
        0x00, 0x10, 0x20, 0x40, 0x20, 0x10, // <
        0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, // =
        0x00, 0x08, 0x04, 0x02, 0x04, 0x08, // >
        0x38, 0x44, 0x08, 0x10, 0x00, 0x10, // ?
        0x3C, 0x42, 0x5A, 0x5C, 0x40, 0x3C, // @
        0x3C, 0x42, 0x42, 0x7E, 0x42, 0x42, // A
        0x7C, 0x42, 0x7C, 0x42, 0x42, 0x7C, // B
        0x3C, 0x42, 0x40, 0x40, 0x42, 0x3C, // C
        0x78, 0x44, 0x42, 0x42, 0x44, 0x78, // D
        0x7E, 0x40, 0x7C, 0x40, 0x40, 0x7F, // E
        0x7E, 0x40, 0x7C, 0x40, 0x40, 0x40, // F
        0x3C, 0x42, 0x40, 0x4E, 0x42, 0x3C, // G
        0x42, 0x42, 0x7E, 0x42, 0x42, 0x42, // H
        0x0E, 0x04, 0x04, 0x04, 0x04, 0x0E, // I
        0x0E, 0x04, 0x04, 0x44, 0x44, 0x38, // J
        0x44, 0x48, 0x70, 0x48, 0x44, 0x42, // K
        0x40, 0x40, 0x40, 0x40, 0x40, 0x7E, // L
        0x42, 0x66, 0x5A, 0x42, 0x42, 0x42, // M
        0x42, 0x62, 0x52, 0x4A, 0x46, 0x42, // N
        0x3C, 0x42, 0x42, 0x42, 0x42, 0x3C, // O
        0x7C, 0x42, 0x42, 0x7C, 0x40, 0x40, // P
        0x3C, 0x42, 0x42, 0x4A, 0x46, 0x3C, // Q
        0x7C, 0x42, 0x42, 0x7C, 0x44, 0x42, // R
        0x3E, 0x40, 0x3C, 0x02, 0x02, 0x7C, // S
        0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, // T
        0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, // U
        0x42, 0x42, 0x42, 0x42, 0x24, 0x18, // V
        0x42, 0x42, 0x42, 0x42, 0x5A, 0x24, // W
        0x42, 0x24, 0x18, 0x18, 0x24, 0x42, // X
        0x44, 0x28, 0x10, 0x10, 0x10, 0x10, // Y
        0x7E, 0x04, 0x08, 0x10, 0x20, 0x7E, // Z
        0x60, 0x40, 0x40, 0x40, 0x40, 0x60, // [
        0x40, 0x20, 0x10, 0x08, 0x04, 0x02, // Backslash
        0x06, 0x02, 0x02, 0x02, 0x02, 0x06, // ]
        0x10, 0x28, 0x44, 0x00, 0x00, 0x00, // ^
        0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, // _
        0x00, 0x08, 0x04, 0x00, 0x00, 0x00, // `
        0x00, 0x3C, 0x02, 0x3E, 0x42, 0x3E, // a
        0x40, 0x40, 0x7C, 0x42, 0x42, 0x7C, // b
        0x00, 0x3C, 0x40, 0x40, 0x40, 0x3C, // c
        0x02, 0x02, 0x3E, 0x42, 0x42, 0x3E, // d
        0x00, 0x3C, 0x42, 0x7E, 0x40, 0x3E, // e
        0x18, 0x20, 0x30, 0x20, 0x20, 0x20, // f
        0x00, 0x3E, 0x42, 0x3E, 0x02, 0x7C, // g
        0x40, 0x40, 0x7C, 0x42, 0x42, 0x42, // h
        0x10, 0x00, 0x30, 0x10, 0x10, 0x38, // i
        0x08, 0x00, 0x08, 0x08, 0x28, 0x10, // j
        0x40, 0x48, 0x50, 0x60, 0x50, 0x48, // k
        0x20, 0x20, 0x20, 0x20, 0x20, 0x18, // l
        0x00, 0x78, 0x54, 0x54, 0x54, 0x54, // m
        0x00, 0x38, 0x24, 0x24, 0x24, 0x24, // n
        0x00, 0x3C, 0x42, 0x42, 0x42, 0x3C, // o
        0x00, 0x7C, 0x42, 0x42, 0x7C, 0x40, // p
        0x00, 0x3E, 0x42, 0x42, 0x3E, 0x02, // q
        0x00, 0x5E, 0x60, 0x40, 0x40, 0x40, // r
        0x00, 0x3E, 0x40, 0x3C, 0x02, 0x7C, // s
        0x10, 0x38, 0x10, 0x10, 0x10, 0x0C, // t
        0x00, 0x42, 0x42, 0x42, 0x42, 0x3C, // u
        0x00, 0x42, 0x42, 0x42, 0x24, 0x18, // v
        0x00, 0x42, 0x42, 0x42, 0x5A, 0x24, // w
        0x00, 0x22, 0x14, 0x08, 0x14, 0x22, // x
        0x00, 0x42, 0x42, 0x3E, 0x02, 0x3C, // y
        0x00, 0x3E, 0x04, 0x08, 0x10, 0x3E, // z
        0x08, 0x10, 0x10, 0x70, 0x10, 0x08, // {
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // |
        0x10, 0x08, 0x08, 0x0E, 0x08, 0x10, // }
        0x00, 0x00, 0x32, 0x4C, 0x00, 0x00, // ~
};

#endif // _6X6FONT_H_
