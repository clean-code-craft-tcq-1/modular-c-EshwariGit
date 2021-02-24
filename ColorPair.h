#ifndef COLORPAIR_H_
#define COLORPAIR_H_

#include "ColorSplit.h"
typedef struct {
   MajorColor_type majorColor;
   MinorColor_type minorColor;
} ColorPair;

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);

#endif
