/*
demolab4-4
Name:Kyle Yoder
Date: July 11, 2018
*/

#include <stdio.h>

int main(void)
{
    int userInput =0;
    printf("Enter a character: ");
    userInput = getc(stdin);
    printf("Your charater was: ");
    putc(userInput, stdout);
    printf("\n");
    

}