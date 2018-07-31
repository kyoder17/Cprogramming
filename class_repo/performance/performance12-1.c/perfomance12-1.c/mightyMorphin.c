/*
Kyle Yoder
Mighty Morphin
30 July 2018
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	FILE * myFile_ptr = fopen("MightyMorphin.txt", "r");
	char readFromFile = 0;
	if (myFile_ptr != NULL)
	{
		while (readFromFile != EOF)
		{
			readFromFile = getc(myFile_ptr);
			putc(readFromFile, stdout);
		}
		fclose(myFile_ptr);
		//printf("\n\n the end");
	}
	else
	{
		puts("Error opening file!");
		getchar(); getchar();
		return -1;
	}
	getchar(); getchar();

	return 0;

}
