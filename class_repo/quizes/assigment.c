/*
assignment
Name:Kyle Yoder
Date: July 13, 2018
*/

#include <stdio.h>

int main(void)
{
    int x=9; 
    int y=3;

    printf("%d\n", x*-y);
    x=9; y=3;
    printf("%d\n", x*=y);
    x=9; y=3;
    printf("%d\n", x/=y);
    x=9; y=3;
    printf("%d\n", x%=y);
    x=9; y=3;
    printf("%d\n", x+=y);
    x=9; y=3;
    printf("%d\n", x-=y);
    x=9; y=3;
    printf("%d\n", x*= ++y);
    x=9; y=3;
    printf("%d\n", x/=y--);
    x=9; y=3;
    printf("%d\n", x%= --x);
    x=9; y=3;
    printf("%d\n", x+= --y);
    x=9; y=3;
    printf("%d\n", x-= y++);
    x=9; y=3;
    printf("%f\n", (y%=y)||(x/=x--));

}