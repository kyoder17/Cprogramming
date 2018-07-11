/*
Lab3B
Name:Kyle Yoder
Date: July 11, 2018
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declare and zeroize a char array with a dimension of 256
    char myFavWord[256]= {0};

    //Assign your chosen pharse to the leading elements of that array
    myFavWord[0] = 'B';
    myFavWord[1] = 'l';
    myFavWord[2] = 'o';
    myFavWord[3] = 'o';
    myFavWord[4] = 'd';
    myFavWord[5]='\n';
    myFavWord[6]='f';
    myFavWord[7]='o';
    myFavWord[8]='r';
    myFavWord[9]='\n';
    myFavWord[10]='t';
    myFavWord[11]='h';
    myFavWord[12]='e';
    myFavWord[13]='\n';
    myFavWord[14]='b';
    myFavWord[15]='l';
    myFavWord[16]='o';
    myFavWord[17]='o';
    myFavWord[18]='d';
    myFavWord[19]='\n';
    myFavWord[20]='g';
    myFavWord[21]='o';
    myFavWord[22]='d';
    myFavWord[23]='\n';
    myFavWord[24]='\0';


    //Explicitly verify your string is nul-terminated
    //Print your string
    printf("%s\n", myFavWord);

    return 0;


}