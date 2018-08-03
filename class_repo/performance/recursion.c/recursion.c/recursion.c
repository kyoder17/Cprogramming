#include <stdio.h>




void printNos(unsigned int n)
{
	int b = 0;
	n>1  ?  printNos(n-1): printf("");
	printf("%d ", n);
	return;

}
// Driver code
int main()
{
	printNos(10);
	getchar();
	return 0;
}
