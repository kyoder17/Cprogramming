#include <stdio.h>

int main()
{

//Declare and zeroize a char array with a dimension of 256
char myFavWord[256]= {0};
char phrase[] = { "Blood for the blood god" };
for (int i = 0; i < 25; i++)
{
	myFavWord[i] = phrase[i];
}
//Assign your chosen pharse to the leading elements of that array
/*
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
*/

//Explicitly verify your string is nul-terminated
//Print your string
printf("%s\n", myFavWord);
//could also use for loops for extra addition

char catchPhrae[10] = { 76, 101, 103, 101, 111, 46, 46, 46, 46 };
catchPhrae[5] = 100;
int j = 1;
for (j = 0; j<10; j++)
{
	printf("%c ", catchPhrae[j]);
}

char letter = 0;
for (int k = 46; k < 100; k++)
{
	printf("the letter %c \n", k);
}
while (1);
return 0;



}