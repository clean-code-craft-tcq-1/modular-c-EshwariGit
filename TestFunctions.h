#ifndef TESTFUNCTIONS_H_
#define TESTFUNCTIONS_H_

#include "ColorPair.h"

extern void testPairToNumber(
     MajorColor_type major,
     MinorColor_type minor,
    int expectedPairNumber);
	

extern void testNumberToPair(int pairNumber,
    MajorColor_type expectedMajor,
    MinorColor_type expectedMinor);
#endif
