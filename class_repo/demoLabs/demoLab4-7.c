/*
demolab4-7
Name:Kyle Yoder
Date: July 12, 2018
*/

#include <stdio.h>

int main(void)
{

    char Gadsby[100];
    scanf("%64[^A-Z\n]s", &Gadsby);
    printf("%s\n", Gadsby);
}
