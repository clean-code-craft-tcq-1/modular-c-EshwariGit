#include <stdio.h>
#include <assert.h>
#include "TestFunctions.h"


void testNumberToPair(int pairNumber,
    MajorColor_type expectedMajor,
    MinorColor_type expectedMinor)
{
    ColorPair colorPair; 
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    colorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(
     MajorColor_type major,
     MinorColor_type minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
