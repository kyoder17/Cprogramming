#include <stdio.h>

int main()
{
	int num1 = 777;
	printf("%d is an int with size of %d \n", num1, sizeof(num1));
	float floaty = 3.2;
	printf("%f is a float with size of %d \n", floaty, sizeof(floaty));
	double bigFloaty = 3.1415;
	printf("%lf is a double with size of %d \n", bigFloaty, sizeof(bigFloaty));
	char letter = 'a';
	printf("%c is a char with size of %d \n", letter, sizeof(letter));
	while (1);
	return 0;

}