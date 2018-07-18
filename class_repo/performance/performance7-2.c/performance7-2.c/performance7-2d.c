/*
Kyle Yoder
Perfomance Lab 7-2d
17 July 2018
*/
#include <stdio.h>

int main()
{
	int var1 = 0;
	int var2 = 0;
	char arith = 0;
 	double output = 0;
	int error1 = 0;
	printf("Please input a number followed by space then an operator then another space then a second number: \n");
	printf("(example: 1 + 2)\n");
	scanf("%u %c %u", &var1, &arith, &var2);
	printf("%u%c%u\n", var1, arith, var2);

	switch (arith)
	{
		case '+':
			output = var1 + var2;
			break;
		case '-':
			output = var1 - var2;
			break;
		case '^':
			output = var1 * var2;
			break;
		case '/':
			output = (float)var1 / (float)var2;
			break;
		case '%':
			output = var1 % var2;
			break;
		default:
			printf("Error");
			while (1);
			return 0;
	}

		printf("The value of this is %.2lf\n", output);
	
	
	while (1);
	return 0;
}