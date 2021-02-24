#ifndef COLORSPLIT_H_
#define COLORSPLIT_H_'
typedef enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET, numberOfMajorColors_type} MajorColor_type;
typedef enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE, numberOfMinorColors_type} MinorColor_type;

const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors =
    sizeof(MinorColor_type) / sizeof(MinorColor_type[0]);

#endif
