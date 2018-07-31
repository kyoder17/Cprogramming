/*
Kyle Yoder
usernames
30 July 2018
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char numStuStr[256] = { 0 };
	int numStudents;
	printf("Please input the numebr of students \n");

	fgets(numStuStr, sizeof(numStuStr), stdin);
	_flushall();
	numStudents = atoi(numStuStr);
	char tempBuff[256] = { 0 };
	char firstname[256] = { 0 };
	char middle[256] = { 0 };
	char last[256] = { 0 };
	char * tempReturnValue = tempBuff;
	char userName[256] = { 0 };
	FILE * myFile_ptr = fopen("classRoster.txt", "a");

	for (int i = 0; i < numStudents; i++)
	{
		_flushall();
		printf("Please enter first name\n");
		_flushall();
		fgets(firstname, sizeof(firstname), stdin);

		//scanf("%s", &firstname)
		printf("Please enter middle name\n");
		fgets(middle, sizeof(middle), stdin);
		
		printf("Please enter last name\n");
		fgets(last, sizeof(last), stdin);
		

		//checks to make sure to remove new lines
		for (int j = 0; j <= strlen(firstname); j++)
		{
			if (firstname[j] != '\n')
			{
				firstname[j] = firstname[j];
			}
			else
			{
				firstname[j] = '\0';
			}
		}
		for (int k = 0; k <= strlen(middle); k++)
		{
			if (middle[k] == '\n')
			{
				middle[k] = '\0';
			}
			else
			{
				middle[k] = middle[k];
			}
		}
		for (int l = 0; l <= strlen(last); l++)
		{
			if (last[l] == '\n')
			{
				last[l] = '\0';
			}
			else
			{
				last[l] = last[l];
			}
		}
		//creates the username using the first leter of first name and middle name with the last name
		int userNameLength = (strlen(last)+2);
		int counter = 0;
		for (int h = 0; h <= userNameLength; h++)
		{
			if (h == 0)
			{
				userName[0] = firstname[0];
			}
			else if (h == 1)
			{
				userName[h] = middle[0];
			}
			else if(h>1 && h<=(userNameLength-1))
			{
				counter = h - 2;
				userName[h] = last[counter];
			}
			else
			{
				userName[h] = '\0';
			}
		}
		//print to screen to check output then append it to the file
		printf("%s %s %s has a user name of %s", firstname, middle, last, userName);
		fputs("\n", myFile_ptr);
		fputs(firstname, myFile_ptr);
		fputs(" ", myFile_ptr);
		fputs(middle, myFile_ptr);
		fputs(" ", myFile_ptr);
		fputs(last, myFile_ptr);
		fputs("has a username of", myFile_ptr);
		fputs(userName, myFile_ptr);
		fputs("\n", myFile_ptr);
	}


	fclose(myFile_ptr);
	getchar(); getchar();
	return 0;
}