/*
Kyle Yoder
perfomance 7.4
18 July 2018
*/
#include <stdio.h>


int main()
{
	while (1) 
	{
		int x = 0;      // User inputted number
		int y = 1;
		int counter = 1;
		printf("Enter a number: \n");
		scanf("%4d", &x);

		// Prevents user from enter a number over 999... exits
		if (x > 999)
		{
			printf("Senpai!! You can't enter numbers larger than 999");
			return 0;
		}
		while (counter < 21)
		{
			if (x <= 0)
			{
				break;
			}
			if (x == 0)
			{
				continue;
			}
			if (x % y != 0)
			{
				y++;
				continue;
			}
			printf("%d is the %d divisible number of %d\n", y, counter, x);
			counter++;
			y++;
			if (y > x)
			{
				counter = 22;
				break;
			}
		}
	}
}