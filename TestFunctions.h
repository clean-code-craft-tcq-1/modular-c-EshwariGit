#ifndef TESTFUNCTIONS_H_
#define TESTFUNCTIONS_H_


#include <stdio.h>
#include <assert.h>

extern void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

extern void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

#endif
