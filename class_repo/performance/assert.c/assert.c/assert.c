/*
Kyle Yoder
Assertion lab
6 Aug 2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define BUFFER_SIZE  256

int main()
{

	/*
	char * dynamicString = NULL;
	dynamicString = calloc(20, sizeof(char));
	assert(dynamicString);
	

	printf("Enter a string \n");
	fgets(dynamicString, 20, stdin);

	puts(dynamicString);
	//dynamicString[19] = 1;
	assert(dynamicString[19] == '\0');
	*/

	// declare buffers
	char buffer[BUFFER_SIZE] = { 0 };
	char buffer2[BUFFER_SIZE] = { 0 };
	char bad_Buffer[BUFFER_SIZE] = { 0 };

	//this ensures that buffer2 is null terminated
	assert(buffer2[BUFFER_SIZE - 1] == '\0');

	//gets a string and then copies it from buffer2 into buffer
	printf("Enter a string \n");
	fgets(buffer2, 255, stdin);
	printf("%s\n", buffer);
	for (int i = 0; i < BUFFER_SIZE; i++)
	{
		buffer[i] = buffer2[i];
	}
	printf("%s\n", buffer);

	//this will overwrite the null terminator for bad buffer and thus it will fail the assert
	bad_Buffer[BUFFER_SIZE - 1] = 5;
	assert(bad_Buffer[BUFFER_SIZE - 1] == '\0');

	getchar(); getchar();

}