/*
Kyle Yoder
Perfomance lab 7-2b
17 July 2018
*/
#include <stdio.h>

int main()
{
	int signNum = 0;
	int makeNeg = 0;
	printf("Please enter a number: \n");
	scanf("%d", &signNum);
	if (signNum & (1<<31))
	{
		printf("The number is negative");
	}
	else
	{
		//signNum = signNum | (1 << 31);
		binary(signNum);
		makeNeg = (~signNum)+1;
		printf("%d\n", makeNeg);
		binary(makeNeg);

	}


	while(1);
	return 0;
}

int binary(int num)
{
	printf("This number in binary is ");
	unsigned i;
	for (i = 1 << (sizeof(num)) - 1; i > 0; i = i / 2)
		(num & i) ? printf("1") : printf("0");
	printf("\n");
}