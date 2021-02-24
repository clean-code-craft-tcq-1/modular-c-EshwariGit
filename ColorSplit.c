#include "ColorSplit.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const char * MinorColorToString(MinorColor_type minorcolor)
{
    return (MinorColorNames[minorcolor]);
}

const char * MajorColorToString(MajorColor_type majorcolor )
{
    return MajorColorNames[majorcolor];
}
