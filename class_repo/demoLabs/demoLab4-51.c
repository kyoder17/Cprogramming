/*
demolab4-5-1&2
Name:Kyle Yoder
Date: July 11, 2018
*/

#include <stdio.h>

int main(void)
{
    char buff[4];
    printf("Enter string: ");
    fgets(buff, sizeof(buff), stdin);
    printf("Your string was: ");
    puts(buff);
    fputs(buff, stdout);
    printf("\n");

}