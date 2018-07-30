/*
Kyle Yoder
Performance lab 11.4
25 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{

	int userInput =0;  //declare integer
	int tempValue;  //declare integer
	int *input_ptr;  // declare pointer

	printf("Please input a variable \n");
	scanf("%d", &userInput); //get user input

	input_ptr = &userInput; // set pointer equal to address of user input value
	tempValue = *input_ptr; // set temp value equal to the value at address of pointer

	printf("userInput = %d, address = 0x%x \n", userInput, &userInput); //print user input and address
	printf("tempValue = %d, address = 0x%x \n", tempValue, &tempValue); //print the temp value and address
	printf("input_prt = %d, address = 0x%x \n", input_ptr, &input_ptr); //print the pointer value and address

	//while (1);
	return 0;
}