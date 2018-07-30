/*
Kyle Yoder
demo lab memory operators
25 july 2018
*/

#include <stdio.h>

int main()
{

	int var1;  // delacre var1
	int var2;
	int var3;
	int *var_ptr;
	var1 = 45;
	var2 = 30;
	printf("var1 = %d, var2 = %d \n", var1, var2);
	var_ptr = &var1;
	var2 = *var_ptr;
	//var3 = *(&var1);
	printf("var1 = %d, var2 = %d \n", var1, var2);
	//printf("var1 = %d, var2 = %d, %d \n", var1, var2, var3);

	while (1);
	return 0;
}