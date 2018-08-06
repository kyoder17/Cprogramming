/*
Kyle Yoder
ERRNO lab
6 AUG 2018
*/

#define _CRT_SECURE_NO_WARNINGS	
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int currentError;
	//if the current error is not 0 then it will print the error code
	if (errno != 0)
	{
		printf("The current error is %d\n", errno);
		perror("Error");
		printf("\n");
	}


	int badValue;
	badValue = sqrt(-1);
	//currentError = errno;
	if (errno != 0)
	{
		printf("The current error is %d\n", errno);
		perror("Error");
		printf("\n");
	}
	FILE * notReal = fopen("badBoys.txt", "r");
	if (errno != 0)
	{
		printf("The current error is %d\n", errno);
		perror("Error");
		printf("\n");
	}

	FILE *noYouCant = fopen("C:\\Windows\\Word.exe", "w");
	if (errno != 0)
	{
		printf("The current error is %d\n", errno);
		perror("Error");
		printf("\n");
	}
	getchar(); getchar();

}