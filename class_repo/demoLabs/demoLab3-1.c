#include <stdio.h>

int main(void)
{
    //first
    int computerScienceCourses [] ={100., 1023, 1033, 1063, 1073};
    //printf("%d \n", computerScienceCourses[0]);
    printf("implicit dimensions, 5 dimentions, index 0-4, non-zeroize \n"); 

    //second
    float studentGPAs [] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};
    printf("implicit dimentions, 7 dimentions, index 0-6, nonzeroize \n");

    //third
    char cardnialDirections [4] = {0};
    printf("explicit dimentions, 4 dimentions, index 0-3, zeroized \n");

    //fourth 
    char catchPhrase [10] = {76, 101, 103, 101, 111};
    printf("explicit dimentions, 10 dimentions, index 0-9, parial-zeroized \n");

    return 0;

}