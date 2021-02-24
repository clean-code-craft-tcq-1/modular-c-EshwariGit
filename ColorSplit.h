#ifndef COLORSPLIT_H_
#define COLORSPLIT_H_
typedef enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET, numberOfMajorColorstype} MajorColor_type;
typedef enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE, numberOfMinorColorstype} MinorColor_type;

const int MAX_COLORPAIR_NAME_CHARS = 16;

extern const char * MinorColorToString(MinorColor_type minorcolor);

extern const char * MajorColorToString(MajorColor_type majorcolor );

#endif
