#include <stdio.h>

int main()
{
	char someArray[256] = { 0 };

	printf("I am a digital warrior and the keyboard is my katana: ");           // Ask user for input

	scanf("%255[^\n]s", someArray);         // Prompt input, limit to 255, kill on newline

	int value = 126;
											// Check for empty string
	if (someArray[0] >= 32)
	{
		if (someArray[0] < 126)
		{
			printf("%s", someArray);

		}
	}
	// else
	// {
	//     printf("The string is empty!");
	// }

	return 0;



}