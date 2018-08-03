/*
Kyle Yoder
icecream
30 July 2018
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define get(x) #x

int main(void)
{
	char tempBuff[256] = { 0 };
	char * tempValue = tempBuff;
	FILE * myFile_ptr1 = fopen("your-song.txt", "w"); // Opens a read-only file
	fprintf(myFile_ptr1, "this is a test!!!");
	fclose(myFile_ptr1);

	FILE * myFile_ptr = fopen("your-song.txt", "r"); // Opens a read-only file
	char readFromFile = 0; // Store char-by-char input from myFile_ptr
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(myFile_ptr); 	// Read one character
			putc(readFromFile, stdout); 		// Print that character
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
	}
	else 			// Otherwise, fopen() failed
	{
		puts(get(Error opening file!)); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}
	getchar(); getchar();
	return 0;
}