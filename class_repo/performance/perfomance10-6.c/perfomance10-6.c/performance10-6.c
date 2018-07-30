/*
Kyle Yoder
Performance 10.6
24 July 2018
*/

#include <stdio.h>
#define BUFFSIZE 64
//combines the two
#define COMBINE_4_REAL(x, y) x##y
//
#define COMBINE(a, b) COMBINE_4_REAL(a ,b)
//prints out what is there directly
#define WRAP_4_REAL(s) #s
#define WRAP(s) WRAP_4_REAL(s)

int main()
{
	//make the array and set it equal to the two strings combined together the first wrap adds quotes the second turns what is there into a string the 
	//combine take the inputs and feeds it into the combine for reall to allow it to concatinatet them
	char inBuff[BUFFSIZE]= (WRAP(WRAP(COMBINE(JOHN, BOY))));

	printf("%s \n", inBuff);
	while (1);

}