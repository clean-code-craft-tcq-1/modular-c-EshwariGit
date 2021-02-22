#ifndef COLORSPLIT_H_
#define COLORSPLIT_H_'
typedef enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET} MajorColor_type;
typedef enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE} MinorColor_Type;

const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

#endif