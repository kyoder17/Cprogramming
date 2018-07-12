/*
demolab4-7b
Name:Kyle Yoder
Date: July 12, 2018
*/

#include <stdio.h>

int main(void)
{

int day = 0;
int month = 0;
int year = 0;

printf("input month followed by day followed by year with dashes in between: \n");
scanf("%d%*c%d%*c%d", &month, &day, &year);
printf("%02d/%02d/%04d\n", month, day, year);


}