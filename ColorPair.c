#include <stdio.h>         
#include "ColorPair.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorToString[colorPair->majorColor],
        MinorColorToString[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor_type)(zeroBasedPairNumber / numberOfMinorColorstype);
    colorPair.minorColor =
        (MinorColor_type)(zeroBasedPairNumber % numberOfMinorColorstype);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColorstype +
            colorPair->minorColor + 1;
}
