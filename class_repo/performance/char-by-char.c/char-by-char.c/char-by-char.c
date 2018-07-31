#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int main(void)
{
	FILE * oldFile_ptr = fopen("oldChar.txt", "r"); // Opens a read-only file
	FILE * newFile_ptr = fopen("newChar.txt", "w");
	char readFromFile = 0; // Store char-by-char input from myFile_ptr
	if (oldFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(oldFile_ptr); 	// Read one character
			fputc(readFromFile, newFile_ptr); 		// Print that character
		}
		fclose(oldFile_ptr); // Always fclose anything you fopen
		fclose(newFile_ptr); //close the new file
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}

	fclose(newFile_ptr);
	readFromFile = 0;
	FILE * newFile_ptr2 = fopen("newChar.txt", "r");
	if (newFile_ptr2 != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(newFile_ptr2); 	// Read one character
			putc(readFromFile, stdout); 		// Print that character
		}
		fclose(newFile_ptr2); //close the new file
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}

	getchar(); getchar();
	return 0;

}