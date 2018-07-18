/*
Kyle Yoder
perfomance 7-5
18 July 2018

NESTED CONTROL FLOW
Print all the even or odd numbers from 0 to 100.
Prompt the user for input to indicate odds or evens.
Loop from 0 to 100 and print all indicated numbers.
Use and IF statement to check if even or odd.
BONUS: Ask the user to continue with a DO-WHILE loop
* write a version with the counting loop written as a FOR loop, and a WHILE loop version.
*/

#include <stdio.h>

int main()
{
	int go = 1;
	while (go == 1)
	{
		int select = 0;
		int i = 0;
		//Prompt the user for input to indicate odds or evens.
		printf("Please select evens or odds, 1 for odds 2 for evens! \n");
		scanf("%d", &select);

		//Use and IF statement to check if even or odd
		for (i=0; i <= 100; i++)
		{
			if (select == 1 && (i % 2 != 0))
			{
				printf("%d is odd \n", i);
			}
			if (select == 2 && (i % 2 == 0))
			{
				printf("%d is even \n", i);
			}
		}
		//BONUS: Ask the user to continue with a DO-WHILE loop
		printf("Please enter 1 to continue 0 to quite. \n");
		scanf("%d", &go);
	}
}