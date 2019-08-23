/**
 * Custom Bitmap for TW3d Printer
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[1024] PROGMEM = {

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
0x00, 0x00, 0x1E, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x38, 0x00, 0x00,
0x00, 0x00, 0x12, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xC0, 0x68, 0x00, 0x00,
0x00, 0x00, 0x13, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x60, 0x4C, 0x00, 0x00,
0x00, 0x00, 0x11, 0xFE, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x3F, 0xC4, 0x00, 0x00,
0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00,
0x00, 0x00, 0x60, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00,
0x00, 0x00, 0xC0, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x80, 0x00,
0x00, 0x01, 0x80, 0x00, 0x10, 0x30, 0xF8, 0x3D, 0xE7, 0xF8, 0xFF, 0x84, 0x00, 0x00, 0xC0, 0x00,
0x00, 0x01, 0x70, 0x00, 0x18, 0xFD, 0xF8, 0x3F, 0xFF, 0xF8, 0xFF, 0x8C, 0x00, 0x0E, 0x40, 0x00,
0x00, 0x03, 0x70, 0xE0, 0x08, 0xEB, 0x9C, 0x37, 0xB9, 0xBC, 0xCC, 0x08, 0x07, 0x0F, 0x40, 0x00,
0x00, 0x02, 0x30, 0xF0, 0x08, 0xFB, 0x0C, 0x3F, 0xB9, 0x9E, 0xCC, 0x08, 0x07, 0x86, 0x60, 0x00,
0x00, 0x02, 0x60, 0xF0, 0x08, 0xFF, 0x1C, 0x3F, 0xF9, 0x9F, 0xCE, 0x08, 0x07, 0x82, 0x20, 0x00,
0x00, 0x02, 0xE0, 0x00, 0x09, 0x8F, 0x18, 0x31, 0xF9, 0x9B, 0xCE, 0x08, 0x00, 0x07, 0xA0, 0x00,
0x00, 0x06, 0xF0, 0x00, 0x09, 0xFF, 0xF8, 0x31, 0xBF, 0xF9, 0xC6, 0x18, 0x00, 0x07, 0xA0, 0x00,
0x00, 0x04, 0xF0, 0x00, 0x04, 0xF9, 0xF0, 0x31, 0x9F, 0xF8, 0xC6, 0x10, 0x00, 0x07, 0xB0, 0x00,
0x00, 0x04, 0xE0, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0xB0, 0x00,
0x00, 0x04, 0xE0, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0xA0, 0x00,
0x00, 0x06, 0xFF, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x7F, 0x20, 0x00,
0x00, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0x00,
0x00, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00,
0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x60, 0x00,
0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x40, 0x00,
0x00, 0x02, 0xC0, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x08, 0x01, 0x60, 0x00,
0x00, 0x02, 0x70, 0x38, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0E, 0x07, 0x20, 0x00,
0x00, 0x02, 0x1F, 0xE0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x03, 0xFC, 0x20, 0x00,
0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00,
0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00,
0x00, 0x0E, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x30, 0x00,
0x00, 0x18, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x1C, 0x00,
0x00, 0x70, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x06, 0x00,
0x00, 0xC0, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x03, 0x80,
0x00, 0x80, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x80,
0x00, 0x80, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x80,
0x00, 0x80, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x80,
0x07, 0x80, 0x00, 0x00, 0x04, 0x6E, 0xC6, 0x7E, 0x30, 0x79, 0xC0, 0x20, 0x00, 0x00, 0x00, 0xE0,
0x1C, 0x01, 0x80, 0x00, 0x04, 0xEE, 0xC6, 0xFE, 0x30, 0x7D, 0xF0, 0x30, 0x00, 0x00, 0xC0, 0x18,
0x70, 0x00, 0xE0, 0x10, 0x04, 0xEE, 0xC7, 0xDE, 0x30, 0x1D, 0xF8, 0x10, 0x04, 0x07, 0x80, 0x07,
0x3C, 0x00, 0x38, 0xFC, 0x04, 0xFE, 0xCF, 0x87, 0xF0, 0x3D, 0xB8, 0x10, 0x3F, 0x8C, 0x00, 0x1E,
0x07, 0x00, 0x0B, 0x87, 0xC4, 0xFE, 0xCF, 0x87, 0xF0, 0x3D, 0x98, 0x13, 0xF0, 0xE8, 0x00, 0x60,
0x01, 0xE0, 0x0E, 0x00, 0x05, 0xFF, 0xCD, 0xBE, 0x30, 0x4D, 0x98, 0x10, 0x00, 0x38, 0x03, 0xC0,
0x00, 0x20, 0x18, 0x00, 0x0D, 0xFB, 0xFD, 0xFE, 0x30, 0xFF, 0xF8, 0x10, 0x00, 0x0C, 0x02, 0x00,
0x00, 0x38, 0x30, 0x00, 0x09, 0xBB, 0x78, 0xF6, 0x30, 0x79, 0xF0, 0x18, 0x00, 0x04, 0x0C, 0x00,
0x00, 0x0E, 0x30, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x78, 0x00,
0x00, 0x01, 0xD9, 0xF0, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x07, 0xCD, 0xC0, 0x00,
0x00, 0x00, 0x7E, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0C, 0x7F, 0x00, 0x00,
0x00, 0x00, 0x1C, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x1C, 0x00, 0x00,
0x00, 0x00, 0x06, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x30, 0x00, 0x00,
0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

};
