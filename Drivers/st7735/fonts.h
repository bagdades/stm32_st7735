/* vim: set ai et ts=4 sw=4: */
#ifndef __FONTS_H__
#define __FONTS_H__

#include <stdint.h>

typedef struct {
    const uint8_t width;
    uint8_t height;
    const uint16_t *data;
} FontDef;

typedef struct {
    const uint16_t *data;
    uint16_t width;
    uint16_t height;
    uint8_t dataSize;
} tImage;

typedef struct {
    long int code;
    const tImage *image;
} tChar;

typedef struct {
    int length;
    const tChar *chars;
} tFont;

extern FontDef Font_7x10;
extern FontDef Font_11x18;
extern FontDef Font_16x26;
extern FontDef Font_26x35;
extern const tFont Font_26;
extern const tFont font_12;
extern const tFont font_18b;
extern const tFont font_21;
extern const tFont font_27;
extern const tFont font_53;
extern const tImage cel;
extern const uint16_t image_data_cel[75];

#endif // __FONTS_H__
