

#include <PCF8814.h>

static PCF8814 lcd1 (4,2,13,3);
static PCF8814 lcd2 (4,2,12,3);
static PCF8814 lcd3 (4,2,11,3);

  //***********  LOGO 1  ************//
const unsigned char logo1 [] PROGMEM = {96,64,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x1F, 0x1F, 0x8F, 0x87, 0xC7, 0xC7, 
0xE3, 0xE3, 0xE1, 0xF1, 0xF1, 0xF1, 0xF1, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 
0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF1, 0xF1, 0xF1, 0xF1, 0xE1, 0xE3, 0xE3, 
0xC7, 0xC7, 0x87, 0x0F, 0x1F, 0x1F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x1F, 0x07, 
0x87, 0xC1, 0xE1, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x0F, 0x03, 0x01, 0x81, 0x41, 0x00, 0x10, 0x88, 0x24, 
0x2C, 0x80, 0x10, 0x20, 0x41, 0x81, 0x01, 0x03, 0x0F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE1, 0xC1, 0x87, 
0x07, 0x1F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x01, 0x80, 0xF0, 0xFC, 0x07, 
0x07, 0xA3, 0xE3, 0xF1, 0xF9, 0xF9, 0xF9, 0xF9, 0xF1, 0xC1, 0x03, 0x03, 
0x07, 0x9F, 0xFF, 0xF8, 0x00, 0x00, 0xE0, 0xF0, 0xE2, 0x40, 0x00, 0x00, 
0x00, 0x08, 0x41, 0xE2, 0xF0, 0x60, 0x00, 0x00, 0xF8, 0xFF, 0x8F, 0x07, 
0x03, 0x03, 0xC1, 0xF1, 0xF9, 0xF9, 0xF9, 0xF9, 0xF1, 0xE3, 0xA3, 0x07, 
0x0F, 0xFC, 0xF0, 0x80, 0x01, 0x0F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x70, 
0x30, 0x30, 0x30, 0x13, 0x13, 0x13, 0x13, 0x19, 0x1F, 0x3F, 0x1E, 0x10, 
0x20, 0x20, 0x04, 0xC7, 0x48, 0xC8, 0xC8, 0xF8, 0x40, 0x40, 0x40, 0xC3, 
0xC7, 0x40, 0x40, 0x40, 0xF8, 0xC8, 0xC8, 0x48, 0xC7, 0x04, 0x20, 0x20, 
0x10, 0x1E, 0x3F, 0x1D, 0x19, 0x13, 0x13, 0x13, 0x13, 0x30, 0x30, 0x30, 
0x70, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 
0x00, 0x00, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xDC, 
0x1C, 0xF8, 0x78, 0x30, 0x30, 0x30, 0x10, 0x08, 0x08, 0x0C, 0x02, 0x83, 
0x83, 0x02, 0x0C, 0x08, 0x08, 0x10, 0x30, 0x30, 0x30, 0x78, 0xF8, 0x1C, 
0xDC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 
0x80, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0, 0x80, 0x01, 0x0F, 0x3F, 0x7F, 
0xFE, 0xF0, 0xE0, 0xC7, 0x83, 0x07, 0x07, 0x03, 0x07, 0x83, 0x40, 0x10, 
0x02, 0x00, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0x87, 0x0F, 
0x0F, 0xA7, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xF8, 0xF0, 0x00, 0x02, 
0x10, 0x43, 0x83, 0x07, 0x03, 0x07, 0x07, 0x83, 0xC7, 0xE0, 0xF0, 0xFE, 
0x7F, 0x3F, 0x0F, 0x01, 0x80, 0xF0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 0xE0, 
0xE1, 0x83, 0x87, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 
0xF0, 0xE0, 0xC0, 0xC3, 0x83, 0x07, 0x07, 0x07, 0x83, 0x83, 0xC0, 0xC0, 
0xC0, 0xC0, 0x83, 0x83, 0x07, 0x07, 0x07, 0x83, 0xC3, 0xC0, 0xE0, 0xF0, 
0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x87, 0x83, 0xE1, 
0xE0, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xF8, 0xF8, 0xF1, 0xE1, 0xE3, 0xE3, 
0xC7, 0xC7, 0x87, 0x8F, 0x8F, 0x8F, 0x8F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 
0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x8F, 0x8F, 0x8F, 0x8F, 0x87, 0xC7, 0xC7, 
0xE3, 0xE3, 0xE1, 0xF0, 0xF8, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

  //***********  LOGO 2  ************//
const unsigned char logo2 [] PROGMEM = {96,64,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xBF, 0x3F, 0xFF, 0xFF, 0xDF, 0xCF, 0x9F, 0xAF, 0x1F, 0x8F, 0x4F, 
0xFF, 0x4F, 0x8F, 0x1F, 0xAF, 0x9F, 0xAF, 0xDF, 0xDF, 0x7F, 0xBF, 0xBF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xDF, 0x2F, 0x27, 0x23, 0x21, 0x7B, 0xFE, 0x3E, 0x9B, 
0xEA, 0x57, 0x35, 0x95, 0x13, 0x33, 0x97, 0xF5, 0xAC, 0xCC, 0xA3, 0xEC, 
0x82, 0xEC, 0xA3, 0xCC, 0x0E, 0x53, 0x17, 0x31, 0x93, 0xD5, 0xE7, 0x57, 
0xAA, 0x9A, 0xBE, 0xFE, 0x7B, 0x23, 0x23, 0x27, 0x2F, 0x5F, 0x7F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x27, 
0x1F, 0x09, 0xE7, 0xED, 0x63, 0x83, 0x6C, 0xF4, 0xD4, 0xBF, 0xF9, 0x39, 
0xF7, 0x38, 0x0E, 0x02, 0x01, 0x41, 0xF0, 0x78, 0x54, 0x8E, 0xDA, 0xA2, 
0x36, 0x2C, 0xF8, 0xE1, 0x01, 0x01, 0x01, 0xC1, 0xF1, 0x7E, 0xC7, 0x01, 
0x01, 0x01, 0xC1, 0xBF, 0xD4, 0xF4, 0xEC, 0x83, 0x62, 0xEC, 0xE7, 0x91, 
0x05, 0x27, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0x49, 0x35, 0x8F, 
0x7B, 0x03, 0x05, 0x5F, 0xFA, 0x3B, 0xFF, 0xF5, 0xF7, 0xEF, 0xEC, 0xA2, 
0x3F, 0x38, 0xE0, 0x80, 0x00, 0x00, 0x03, 0x03, 0x06, 0x0C, 0x0D, 0x1A, 
0x1E, 0x12, 0x3D, 0x3D, 0x2F, 0x50, 0x67, 0xE3, 0xB1, 0xBF, 0xE1, 0x40, 
0x40, 0xC0, 0x87, 0xBD, 0xF1, 0xF5, 0xFF, 0x33, 0xFA, 0xFF, 0x0D, 0x07, 
0x63, 0x9B, 0x35, 0x4D, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE4, 0xC5, 0xDD, 0xCC, 
0xD4, 0xAE, 0x5F, 0x3F, 0x8F, 0x13, 0x71, 0xD4, 0xA0, 0xEF, 0x29, 0x2C, 
0x7C, 0xCF, 0xC6, 0xF7, 0x77, 0x0B, 0x3A, 0xE4, 0x7C, 0xF8, 0x48, 0xC8, 
0x78, 0xD0, 0x50, 0x60, 0x20, 0xC0, 0x80, 0x00, 0x00, 0x01, 0x02, 0x06, 
0x0C, 0xFC, 0xC9, 0xEF, 0x20, 0xD4, 0x70, 0x29, 0x9F, 0x3F, 0x7F, 0x3E, 
0xD4, 0xCD, 0xD9, 0xC0, 0xC4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF4, 0xE8, 
0xF1, 0xEF, 0xD1, 0xA5, 0xA3, 0x5F, 0x7C, 0x3F, 0x07, 0x00, 0x80, 0xE0, 
0xE0, 0x7C, 0x0F, 0x01, 0x80, 0x80, 0x80, 0x80, 0x87, 0x0C, 0x11, 0x2E, 
0x60, 0x7E, 0x51, 0x6E, 0x57, 0x22, 0x3F, 0x1F, 0x00, 0x00, 0x80, 0x60, 
0xF0, 0xCF, 0x9D, 0xFF, 0x37, 0x5F, 0x7E, 0x3F, 0xA3, 0x05, 0xD1, 0xEF, 
0xF0, 0xE8, 0xF4, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFD, 0xEC, 0xFC, 0x9C, 0xDC, 0xCC, 0x74, 0x27, 0xDF, 
0x3F, 0x34, 0xF3, 0xB3, 0xBF, 0xE3, 0x41, 0xF5, 0x53, 0xE1, 0x65, 0x59, 
0xEA, 0x32, 0x2E, 0xE2, 0x52, 0x7A, 0x42, 0xF6, 0xBF, 0xB9, 0xF6, 0x74, 
0xB7, 0x9D, 0xE4, 0x7B, 0xC3, 0xF6, 0x9C, 0xF4, 0xE9, 0xFB, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFB, 0xFB, 0xF4, 0xF6, 0xF4, 0xF8, 0xEA, 0xE5, 0xF2, 0xFA, 
0xFF, 0xFA, 0xE2, 0xE5, 0xEA, 0xF8, 0xF4, 0xF6, 0xF4, 0xFB, 0xFB, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

  //***********  LOGO 3  ************//
const unsigned char logo3 [] PROGMEM = {96,64,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x4F, 
0xDF, 0x17, 0x07, 0x8F, 0xFF, 0x5F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0x7F, 0x7F, 0x1F, 0x17, 0x3F, 0x37, 0x07, 0x1F, 0x7F, 0xFF, 0x7F, 
0x77, 0x1F, 0x8F, 0x0F, 0x07, 0x1F, 0x7F, 0x3F, 0x3F, 0x3F, 0x3F, 0x0F, 
0x8F, 0x17, 0x07, 0x0F, 0x5F, 0x27, 0x7F, 0xBF, 0xC7, 0x97, 0x8F, 0x47, 
0x1F, 0x8F, 0x1F, 0x3F, 0x4F, 0x1F, 0x87, 0x1F, 0x0F, 0x7F, 0x7F, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4A, 0x02, 0x80, 0x0C, 0x00, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x10, 0x00, 0x43, 0x67, 0x72, 0xFF, 0xE7, 0xC9, 
0x40, 0x13, 0x06, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xAC, 0x00, 0x00, 0x00, 
0xC0, 0xE7, 0xFF, 0x8F, 0xAB, 0x09, 0x00, 0x00, 0x40, 0x18, 0x0C, 0xFF, 
0xFF, 0x3F, 0x4F, 0x47, 0x00, 0x40, 0x80, 0x00, 0xA1, 0xFF, 0xFF, 0xFF, 
0xFF, 0x37, 0x07, 0x07, 0x07, 0x07, 0x87, 0x07, 0x0F, 0x45, 0x70, 0x60, 
0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB3, 0x34, 0x00, 0x00, 0x06, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x05, 0x00, 0x1C, 0x08, 0x9F, 0x8A, 0x0A, 
0x04, 0x04, 0x20, 0x7B, 0xFF, 0xFF, 0xFF, 0xCF, 0x07, 0x00, 0x00, 0x02, 
0x06, 0xEF, 0xFF, 0xFF, 0xFF, 0x0E, 0x0F, 0x0F, 0x0F, 0x1E, 0xBF, 0xFF, 
0xFC, 0xE0, 0x82, 0x0A, 0x02, 0x08, 0x00, 0x00, 0x61, 0xFF, 0xFF, 0xFF, 
0xFF, 0x0F, 0x06, 0x06, 0x07, 0x07, 0x0F, 0x8F, 0x07, 0x00, 0x38, 0xF8, 
0x7D, 0x77, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFC, 0xE0, 0xF0, 0xF4, 0x8F, 
0xCF, 0x0F, 0x1F, 0x0F, 0x8F, 0x0F, 0x07, 0x8F, 0x0F, 0x8F, 0x3E, 0x0E, 
0x20, 0xD0, 0xE0, 0x8E, 0x06, 0x0F, 0x2F, 0x0F, 0x68, 0xF0, 0xE0, 0x70, 
0x89, 0x8F, 0xAF, 0x8F, 0x1F, 0xC8, 0xE0, 0xC0, 0x90, 0xC0, 0xE9, 0xEF, 
0xCF, 0x6F, 0x8F, 0x8B, 0x04, 0x00, 0x80, 0xF0, 0xE0, 0x8F, 0x8F, 0x0F, 
0x8F, 0x1F, 0x0F, 0x8E, 0x8F, 0x1F, 0x9F, 0x8F, 0x0E, 0x0F, 0xE6, 0xF8, 
0xF0, 0xFE, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFE, 0xFF, 0xEF, 0x8E, 0x1F, 0x0F, 0x3F, 0xF0, 0xE0, 0xF9, 0xF8, 
0xF8, 0xFA, 0xF1, 0xF1, 0xE1, 0xE1, 0xE0, 0xE0, 0xE2, 0xE1, 0xF8, 0x60, 
0x07, 0x03, 0x0F, 0x41, 0x60, 0xED, 0xE9, 0xE3, 0xF1, 0x0F, 0x0F, 0x1F, 
0x0E, 0x8F, 0x4F, 0x17, 0xF1, 0xF1, 0xE0, 0xF1, 0xF0, 0x2F, 0x0F, 0x0F, 
0x1F, 0x54, 0xD0, 0xF0, 0xE9, 0xE0, 0xA2, 0x03, 0x0F, 0x0F, 0x2F, 0x85, 
0x93, 0xC7, 0xE0, 0xE0, 0xE8, 0xF2, 0xF3, 0xE3, 0xF9, 0xE1, 0xE9, 0xE5, 
0x71, 0x13, 0x7F, 0xBF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xF7, 0xF7, 0xC7, 0x89, 0x03, 
0x03, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD5, 0x01, 0x01, 0x01, 0xC0, 
0x01, 0x00, 0x00, 0x7E, 0xFC, 0xFF, 0xFF, 0xFF, 0xFB, 0xF0, 0xE0, 0xF0, 
0xF1, 0xF1, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x92, 0x00, 0x00, 
0x40, 0xE2, 0xEF, 0xFF, 0xFF, 0xFF, 0xDF, 0x0C, 0x00, 0x80, 0x80, 0x09, 
0x3F, 0x7F, 0xFF, 0xFF, 0xFB, 0xE1, 0xE1, 0xE0, 0xC0, 0xF0, 0xC1, 0x83, 
0x02, 0x76, 0x7C, 0x7C, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x58, 0x8A, 0x00, 
0x20, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x60, 0x00, 0x00, 0xCF, 0x8D, 
0x2A, 0x01, 0x00, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0xDD, 0xC1, 0x81, 0x01, 
0xA3, 0x01, 0xC1, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x10, 0x08, 0x00, 
0x02, 0x19, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 0x00, 0x04, 0x01, 0x01, 0xF0, 
0xE1, 0xE0, 0xE0, 0xC8, 0xE1, 0xE3, 0xE3, 0xF3, 0xFF, 0xFF, 0xFF, 0x7F, 
0xBF, 0x81, 0x88, 0xC4, 0xA7, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFC, 
0xFE, 0xF2, 0xF1, 0x81, 0xF1, 0xE3, 0xE3, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 
0xFE, 0xFC, 0xF8, 0xEA, 0xC7, 0xF1, 0x85, 0xF1, 0xC5, 0xF5, 0xFC, 0xFE, 
0xFD, 0xFE, 0xF2, 0xFC, 0xE3, 0xF3, 0xE3, 0xE3, 0xE5, 0xF0, 0xFC, 0xFC, 
0xFE, 0xD2, 0xE3, 0xE3, 0xD3, 0xE3, 0xE3, 0xE4, 0xFE, 0xF9, 0xF0, 0xE1, 
0xE1, 0xD5, 0xC3, 0xE1, 0xE7, 0xF3, 0xC1, 0xE1, 0xF9, 0xF9, 0xF0, 0xFD, 
0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
void setup() {
  // PCD8544-compatible displays may have a different resolution...
  lcd1.begin();
    lcd2.begin();
        lcd3.begin();
}
void loop() {
         
 lcd1.setCursor(2,3);
 lcd1.print("TEST LCD 1");
 lcd2.setCursor(2,3);
 lcd2.print("TEST LCD 2");
 lcd3.setCursor(2,3);
 lcd3.print("TEST LCD 3");
  delay(5000);
  
    // test inverse mode
  lcd1.setInverse(true);
  lcd2.setInverse(true);
  lcd3.setInverse(true);
  delay(5000);
  clearLCD() ;
  
 lcd1.drawPict(0,0,logo1);
 lcd2.drawPict(0,0,logo2);
 lcd3.drawPict(0,0,logo3);
  delay(5000);
  
    // back normal mode
  lcd1.setInverse(false);
  lcd2.setInverse(false);
  lcd3.setInverse(false);
  delay(5000);
  clearLCD() ;
  
}

void clearLCD(){
  lcd1.clear();
  lcd2.clear();
  lcd3.clear();
}
