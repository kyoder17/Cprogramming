/*
Kyle Yoder
output lab
6 Aug 2018
*/

#define _CRT_SECURE_NO_WARNINGS	
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <assert.h>

#define BUFFER_SIZE 10
int main()
{

	int currentError=0;
	char inputArray[BUFFER_SIZE] = { 0 };
	char writeBuffer[BUFFER_SIZE] = { 0 };

	//this will take in a string and ensure it is null terminated
	printf("Please enter a sting\n");
	fgets(inputArray, 256, stdin);
	assert(inputArray[BUFFER_SIZE - 1] == '\0');
	currentError = errno;
	if (currentError != 0)
	{
		printf("The current error is %d\n", currentError);
		perror("Error");
		printf("\n");
		errno = 0;
	}

	//this will write into a new buffer and print it
	for (int i = 0; i < BUFFER_SIZE; i++)
	{
		writeBuffer[i] = inputArray[i];
	}
	printf("%s \n", writeBuffer);

	//this will then try to write the buffer into a good file 

	FILE *goodFile = fopen("goodFile.txt", "w");
	currentError = errno;
	if (currentError != 0)
	{
		printf("The current error is %d\n", currentError);
		perror("Error");
		printf("\n");
		errno = 0;
	}
	else
	{
		for (int i = 0; i < BUFFER_SIZE; i++)
		{
			putc(writeBuffer[i], goodFile);
		}

		fclose(goodFile);
	}



	//this will try to write to a file without permissions

	FILE *badFile = fopen("C:\\Windows\\Notepad.exe", "w");
	currentError = errno;
	if (currentError != 0)
	{
		printf("The current error is %d\n", currentError);
		perror("Error");
		printf("\n");
		errno = 0;
	}
	else
	{
		for (int i = 0; i < BUFFER_SIZE; i++)
		{
			putc(writeBuffer[i], badFile);

		}
		fclose(badFile);
	}





	//this will ask again for a string but this time it will write over the null terminator causing an assert error
	printf("Please enter a sting\n");
	fgets(inputArray, 256, stdin);
	inputArray[BUFFER_SIZE - 1] = 'k';
	assert(inputArray[BUFFER_SIZE - 1] == '\0');
	currentError = errno;
	if (currentError != 0)
	{
		printf("The current error is %d\n", currentError);
		perror("Error");
		printf("\n");
		errno = 0;
	}
	getchar(); getchar();

}