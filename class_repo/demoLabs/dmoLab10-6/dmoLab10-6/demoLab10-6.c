#include <stdio.h>

#define TEST 1234
#define STRING(s) #s
#define CAT(s, t) s##t

int example(x, y);

int main()
{
	printf("%d \n", TEST);
	char str[] = { STRING(IT!) };
	printf("%s\n", str);
#undef TEST
#define TEST 4444
	printf("%d \n", TEST);
	//int s = 45;
	//int t = 45;
	printf("%d \n", CAT(45, 45));
	while (1);
	return 0;
}

int example(x, y)
{

}