/*
Kyle Yoder
Performance lab 7-2A
17 July 2018
*/
#include <stdio.h>

int main()
{
	char someArray[256] = { 0 };
	printf("I am a digital warrior and the keyboard is my katana: ");           // Ask user for input
	scanf("%255[^\n]s", someArray);         // Prompt input, limit to 255, kill on newline

	if (someArray[0] >= 32)
	{
		if (someArray[0] < 126)
		{
			printf("%s", someArray);

		}
	}
	//for testing purposes use atl+0232 to create a special char
	//while (1);
	return 0;



}