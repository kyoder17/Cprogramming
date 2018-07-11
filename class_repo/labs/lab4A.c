/*
Lab4A
Name:Kyle Yoder
Date: July 11, 2018
*/

#include <stdio.h>

int main(void)
{
    int userInput = 0;
    printf("Enter a character: ");
    userInput=getchar();
    printf("Your character was: ");
    putchar(userInput+1);
    printf("\n");
}