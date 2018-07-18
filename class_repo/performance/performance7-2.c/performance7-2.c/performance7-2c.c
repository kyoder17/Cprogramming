/*
Kyle Yoder
Perfomance Lab 7-2c
17 July 2018
*/
#include <stdio.h>

int main()
{
	unsigned int var1 = 0;
	unsigned int var2 = 0;
	unsigned int var3 = 0;
	unsigned int tempvar = 0;

	printf("Please input 2 numbers: \n");
	scanf("%d %d", &var1, &var2);
	printf("%u, %u\n", var1, var2);
	if ((var1 + var2 + var3) > 2)
	{
		if (var1 == var2)
		{
			printf("Error, numbers can not be equal.\n");
		}
		else if (var1 > var2)
		{
			tempvar = var1;
			var1 = var3;
			var3 = tempvar;
		}
		else
		{
			tempvar = var2;
			var2 = var3;
			var3 = tempvar;
		}


		printf("The values of the variables are %d, %d, %d.\n", var1, var2, var3);
	}
	while (1);
	return 0;
}