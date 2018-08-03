//#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//char* itoa(int num, char* buffer, int base);

int main()
{
	int a = 54325;
	char buffer[20];
	_itoa(a, buffer, 2);   // here 2 means binary
	printf("Binary value = %s\n", buffer);

	_itoa(a, buffer, 10);   // here 10 means decimal
	printf("Decimal value = %s\n", buffer);

	_itoa(a, buffer, 16);   // here 16 means Hexadecimal
	printf("Hexadecimal value = %s\n", buffer);
	getchar();
	return 0;
}
