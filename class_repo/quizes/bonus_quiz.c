/*
bonus quiz
Name:Kyle Yoder
Date: July 13, 2018
*/

#include <stdio.h>

int main(void)
{
    int y=4;
    // result needs to be 20
    //1+2*(3+y)+5;
    printf("%d\n", (1+2)-3+(y*5));
    int x=2;
    y=6;
    //x != y != 3 >=x;
    printf("%d\n", y != x != 3 >=x); //result 0


    x = 9; y = 3;
    //(y %= y) || (x /= x--)
    printf("%d\n", (y %= y) && (x /= x--)); //result 0


}