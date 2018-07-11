#include <stdio.h>

int main (void)
{
    int integer = 42;
    float singlePrecision = 2.2;
    double doublePrecision = 3.31223344556677;
    char singleChar = 'J';

    printf("your int: %d cast to a float: %f \n", integer , (float)integer);
    printf("your int: %d cast to a char: %c \n", integer, (char)integer);
    printf("your float: %f cast to a double: %lf \n", singlePrecision, (double)singlePrecision);
    printf("your double: %lf cast to a float: %f \n", doublePrecision, (float)doublePrecision);
    printf("your char: %c cast to an int: %d \n", singleChar, (int)singleChar);
    printf("33 cast to a char: %c \n", (char)33);

    return 0;


}