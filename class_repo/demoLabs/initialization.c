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
    char firstInit = 'J', middleInit = 'E', lastInit = 'H';

    double pi = 3.14159265359;    // stores the constant "pi"
    int finalResult = 0;    // placeholder 0. to be changed later.
    printf("%d \n", lowerLimit);
    printf("%d \n", upperLimit);
    printf("%f \n",x);
    printf("%f \n",y);
    printf("%c,%c,%c \n", firstInit, middleInit, lastInit);
    printf("%lf \n",pi);
    return 0;
}