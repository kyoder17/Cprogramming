/*
Kyle Yoder
03 Aug 2018
optimization
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <errno.h>
#include <time.h>

int iterative(int numberFibonacciNumbers);
int fibonacci_number(int sequenceNumber);
void error_reporting(int currentErrno);
int recursive(int numberFibonacciNumbers);


#ifndef ASSERR
#define ASSERR
#endif

clock_t start, end;
double cpu_time_used;

int main(void)
{
	int numberFibonacciNumbers = 0;
	double iTime = 0;
	double rTime = 0;
	printf("How many Fibonacci numbers would you like to print? \n");
	_flushall();
	scanf("%d", &numberFibonacciNumbers);
	iTime = iterative(numberFibonacciNumbers);
	rTime = recursive(numberFibonacciNumbers);

	printf("the iteritive function took %fl\n", iTime);
	printf("The recursive function took %fl\n", rTime);

	getchar(); getchar();

}


int iterative(numberFibonacciNumbers)
{
	start = clock();
	int i = 0;
	//int numberFibonacciNumbers = 0;
	int fibNumMinus2 = 0;
	int fibNumMinus1 = 1;
	int currentFibNum = 0;


	printf("******************\n");
	printf("FIBONACCI SEQUENCE\n");
	printf("******************\n");
	printf("%d\n%d\n", fibNumMinus2, fibNumMinus1);

	for (i = 0; i < numberFibonacciNumbers; i++)
	{
		currentFibNum = fibNumMinus1 + fibNumMinus2;
		printf("%d\n", currentFibNum);
		fibNumMinus2 = fibNumMinus1;
		fibNumMinus1 = currentFibNum;
	}
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	//getchar(); getchar();
	return cpu_time_used;
}



int recursive(numberFibonacciNumbers)
{
	start = clock();
	int i = 0;
	//int numberFibonacciNumbers = 0;
	int currentFibNum = 0;
	int currentErr = 0;
	
	currentErr = errno;
	if (currentErr != 0)
	{
		error_reporting(currentErr);
	}
#ifdef ASSERR
	assert(numberFibonacciNumbers > 0);
#endif
	printf("******************\n");
	printf("FIBONACCI SEQUENCE\n");
	printf("******************\n");
	for (i = 0; i < numberFibonacciNumbers; i++)
	{
		currentFibNum = fibonacci_number(i);
		printf("%d\n", currentFibNum);
	}
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	//getchar(); getchar();
	return cpu_time_used;
}

int fibonacci_number(int sequenceNumber)
{
	int returnValue;
	if (sequenceNumber < 0)
	{
		returnValue = -1;
	}
	else if (0 == sequenceNumber)
	{
		returnValue = 0;
	}
	else if (1 == sequenceNumber)
	{
		returnValue = 1;
	}
	else
	{
		returnValue = fibonacci_number(sequenceNumber - 1) + fibonacci_number(sequenceNumber - 2);
	}
	return returnValue;
}


void error_reporting(int currErrno)
{
	if (currErrno)
	{
		perror(strerror(currErrno));
	}
	return;
}