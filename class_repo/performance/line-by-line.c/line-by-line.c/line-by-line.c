#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE * myFile_ptr = fopen("line-by-line.txt", "r"); // Opens a read-only file
	FILE * newWrite = fopen("newFile.txt", "w");
	char tempBuff[256] = { 0 };
	char * tempReturnValue = tempBuff; // Holds fgets() return value
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
	{
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{
				fputs(tempBuff, newWrite);	// …print the buffer
			}
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
		fclose(newWrite);
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}

	//now reopen it to read line by line
	FILE * myNewPtr = fopen("newFile.txt", "r"); //reopen the new 

	char tempBuff2[256] = { 0 };
	char * tempReturnValue2 = tempBuff2; // Holds fgets() return value
	if (myNewPtr!= NULL) 	// Verify fopen() succeeded… 
	{
		while (tempReturnValue2) // Continue reading until return value is NULL
		{
			tempReturnValue2 = fgets(tempBuff2, 256, myNewPtr);
			if (tempReturnValue2) 	// If EOF hasn’t been reached…
			{
				puts(tempBuff2);	// …print the buffer
			}
		}
		fclose(myNewPtr);
	}
	getchar(); getchar();
	return 0;
}