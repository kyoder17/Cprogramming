#include <stdio.h>

int main(void)
{
    /******** VARIABLE INITIALIZATION ********/

    /* initialization syntax...
    <DATA TYPE> <VARIABLE NAME> = <INITAL VALUE>; */

    int lowerLimit = -10;    // lowest y value for grahp
    int upperLimit = 10;     // highest y value for graph
    float x = 1.0, y = 2.1;  // graphing variables 

    // used to hold a person's individual initials
    char firstInit = 'K', middleInit = 'R', lastInit = 'Y';

    double pi = 3.14159265359;    // stores the constant "pi"
    int finalResult = 0;    // placeholder 0. to be changed later.
    printf("lowerLimit is %d and its size is %d\n", lowerLimit, sizeof(lowerLimit));
    printf("upperLimit is %d and its size is %d\n", upperLimit, sizeof(upperLimit));
    printf("x is %f and its size is %d \n",x, sizeof(x));
    printf("y is %f and its size is %d \n",y, sizeof(y));
    printf("first initial is %c and its size is %d\n", firstInit, sizeof(firstInit));
    printf("middle initial is %c and its size is %d \n", middleInit, sizeof(middleInit));
    printf("last iniital is %c and its size is %d\n", lastInit, sizeof(lastInit));
    printf("pi is %lf and its size is %d \n",pi);
    printf("final result is %d and it size is %d\n", finalResult, sizeof(finalResult));
    return 0;
}