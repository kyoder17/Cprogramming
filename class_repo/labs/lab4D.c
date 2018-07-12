/*
Lab4D
Name:Kyle Yoder
Date: July 12, 2018
*/

#include <stdio.h>

int main(void)
{
    char fname[21]={};
    char mname[21]={};
    char lname[21]={};
    printf("Input your FIRST MIDDLE LAST name: ");
    scanf("%20s\t%20s\t%20s",&fname,&mname,&lname);
    printf("Your name is \n\t%s \n\t%s \n\t%s\n",fname,mname,lname);

    int num1;
    int num2;
    printf("Input two integers seperated by a * that will then be multiplied: ");
    scanf("%d*%d",&num1,&num2);
    printf("The result of %d multiplied by %d is %d\n",num1,num2, num1*num2);
}