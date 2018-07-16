/*
Capstone
Name:Kyle Yoder
Date: July 16, 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
#define solution4 // This source file contains four solutions to the given Demonstration Lab
#ifdef solution3
#include <math.h>
#endif

int main(void)
{
    uint16_t inputMask = 1;
	uint16_t arbValue = 8;
    uint16_t newValue;
    uint16_t shiftValue;
    printf("\nThe initial value is %u\n", arbValue);
    printf("Please input a bit position to flip between 0 and %d\n", sizeof(arbValue)*8-1);
    scanf("%u", &shiftValue);
    //printf("%X\n", inputMask);
    inputMask = inputMask <<shiftValue;
    //printf("%X\n", inputMask);
    newValue = arbValue ^inputMask;
    printf("%X\n\n", newValue);


}