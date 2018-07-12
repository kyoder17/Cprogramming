/*
demolab4-6
Name:Kyle Yoder
Date: July 12, 2018
*/

#include <stdio.h>

int main(void)
{
    float someNum = 12.3456;
    printf("%-f", someNum);
    printf("\n");
    printf("%-f", someNum * -1.0); 
    printf("\n");

    printf("%f", 1.2);  //1.200000
    printf("\n");
    printf("%+8.4f", -1.798); // -1.7980
    printf("\n");
    printf("%7.2f", 0.987654321);  //   0.99
    printf("\n");
    printf("%-6.1f is yours", 13.37);  //13.4   is yours
    printf("\n");
    printf("Yours is %05.2f", 1.2345);  //Yours is 01.23
    printf("\n");
    printf("%s", "Hello World!\0"); //Hello World!
    printf("\n");
    printf("%9.5s", "Hello World!\0");  //    Hello
    printf("\n");
    printf("%016.11s", "Hello World!");  //     Hello World
    printf("\n");
    printf("%020.11s", "Hello World!");  //     Hello World
    printf("\n");
    printf("%012.11s", "Hello World!");  //     Hello World
    printf("\n");
}