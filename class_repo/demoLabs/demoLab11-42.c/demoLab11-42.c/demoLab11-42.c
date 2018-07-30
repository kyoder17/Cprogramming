/*
Kyle Yoder
demo lab 44.4.2
25 July 2018
*/

#include <stdio.h>


int * find_smallest_natural_number(int *intArray_prt, int arraySize);

int main()
{

	int *intArray_ptr;
	int bigArray[10] = { 17, 2, 5, 4, 8, 9, 4, 7, 1, 15 };
	intArray_ptr = bigArray;
	int tempValue;

	find_smallest_natural_number(intArray_ptr, 10);
	printf("Smallest is %p \n", intArray_ptr);
	while (1);
	return 0;
}

int * find_smallest_natural_number(int *intArray_ptr, int arraySize)
{
	if (intArray_ptr == NULL)
	{
		return NULL;
	}
	if (arraySize < 0)
	{
		return NULL;
	}
	for (int x = 0; x < arraySize; x++)
	{
		if (intArray_ptr > arraySize[x])
		{
			intArray_ptr = arraySize[x];
			x--;
		}
	}
}