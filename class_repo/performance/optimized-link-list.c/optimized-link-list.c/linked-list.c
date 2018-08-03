/*
Kyle Yoder
Linked list
1 Aug 2018
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked-list.h"
#include <time.h>

clock_t start, end;
double cpu_time_used;

int main()
{
	
	int selection = 0;
	int selectStud = 0;

	//create the structure of students and thier info
	struct studentInfo student1 = { "Abraham Lincoln","AL", "Maroon5", "Lamborghini Aventador", 10, NULL };
	struct studentInfo student2 = { "Dennis the Menace","DtM", "Drake", "Lamborghini Aventador", 9, &student1 };
	struct studentInfo student3 = { "Gandolf the Grey","GtG", "Ariana Grande", "Large Eagle", 8, &student2 };
	struct studentInfo student4 = { "John F Kennedy","JFK", "Maroon5", "Lamborghini Aventador", 7, &student3 };
	struct studentInfo student5 = { "Martin Luther King","MLK", "Maroon5", "Lamborghini Aventador", 6, &student4 };
	struct studentInfo student6 = { "Peter Parker","PP", "Maroon5", "Lamborghini Aventador", 5, &student5 };
	struct studentInfo student7 = { "Stevo","S", "Maroon5", "Lamborghini Aventador", 4, &student6 };
	struct studentInfo student8 = { "Vader, Darth","VD", "Maroon5", "Lamborghini Aventador", 3, &student7 };
	struct studentInfo student9 = { "Yosemite Sam","YS", "Maroon5", "Horse", 2, &student8 };
	struct studentInfo student10 = { "Zerg Rush","ZR", "Beatles", "On Foot", 1, &student9 };


	struct studentInfo *head = &student10;

	// loop though until user is done making selctions
	while (selection < 9)
	{
		selection = selectPrint();
		if (selection == 0)
		{
			printAllInfo(head);
		}
		else if (selection >= 1 && selection <= 3)
	    {
			 printSelectInfo(head, selection);
	    }
		else if (selection == 4)
		{
			selectStud=selectStudent(head);
			printSpecialStudent(head, selectStud);
		}
		else if(selection == 5)
		{
			testImput(head);
		}
		else if (selection == 6)
		{
			addStudentEnd(head);

		}
		else if (selection == 7)
		{
			removeStudentEnd(head);
		}
		else if (selection == 8)
		{
			removeSpecificStudent(head);
			resetStudentNumber(head);
		}
		else if (selection > 8 || selection < 0)
		{
			break;
		}

	}

	getchar(); getchar();
	return 0;
}

void printAllInfo(struct studentInfo *head)
{
	start = clock();



	while (head != NULL)
	{
		printf("%s ", head->name);
		printf("%s ", head->initials);
		printf("%s ", head->artist);
		printf("%s \n", head->car);
		head = head->next_node;
	}
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\ntime to execute is %fl \n", cpu_time_used);
	return 0;
}

int selectPrint()
{
	int selection = 4;
	printf("\nPlease select what you would like to have printed. \n");
	printf("	Enter 0 for all information \n");
	printf("	Enter 1 for initials \n");
	printf("	Enter 2 for favorite artist  \n");
	printf("	Enter 3 for dream car \n");
	printf("	Enter 4 to select a specific student \n");
	printf("	Enter 5 for just names \n");
	printf("	Enter 6 to enter a new student \n");
	printf("	Enter 7 to remove last student \n");
	printf("	Enter 8 to remove selected student \n");
	printf("	Enter 9 to exit selection list \n");
	scanf("%d", &selection);
	return selection;
}

void printSelectInfo(struct studentInfo *head, int selection)
{
	if (selection == 1)
	{
		while (head != NULL)
		{
			printf("%s ", head->name);
			printf("%s \n", head->initials);
			head = head->next_node;
		}
	}
	else if (selection == 2)
	{
		while (head != NULL)
		{
			printf("%s ", head->name);
			printf("%s \n", head->artist);
			head = head->next_node;
		}
	}
	else if (selection == 3)
	{
		while (head != NULL)
		{
			printf("%s ", head->name);
			printf("%s \n", head->car);
			head = head->next_node;
		}
	}
	else
	{
		printf("bad selection");
		return 0;
	}
}

int selectStudent(struct studentInfo *head)
{
	int selectStud;
	while (head != NULL)
	{
		printf("%d ", head->studentNumber);
		printf("%s \n", head->name);
		head = head->next_node;
	}
	printf("Enter the number coresponding to the student you wish to print info for. \n");
	scanf("%d", &selectStud);
	return selectStud;
}

void printSpecialStudent(struct studentInfo *head, int selectStud)
{
	while (head != NULL)
	{
		if (head->studentNumber != selectStud)
		{
			head = head->next_node;
		}
		else if (head->studentNumber == selectStud)
		{
			printf("\n%s ", head->name);
			printf("%s ", head->initials);
			printf("%s ", head->artist);
			printf("%s \n", head->car);
			return 0;
		}
		else
		{
			printf("Selection was not in the list of students.");
			return 0;
		}
	}
}

void testImput(struct studentInfo *head)
{
	while (head != NULL)
	{

		printf("%s \n", head->name);
		head = head->next_node;
	}
	return 0;
}


void addStudentEnd(struct studentInfo *head)
{
	struct studentInfo *tempHead = head;
	char newName[256];
	char newInitials[256] = { 0 };
	char newArtist[256];
	char newCar[256];
	int newStudentNumber;
	int counter =0;
	while (tempHead != NULL)
	{
		tempHead = tempHead->next_node;
		counter++;
	}
	newStudentNumber = counter + 1;
	printf("Please enter the name of the student. \n");
	scanf("%s", &newName);
	printf("Please enter the initials of the student. \n");
	scanf("%s", &newInitials);
	printf("Please enter the favorite artist of the student. \n");
	scanf("%s", &newArtist);
	printf("Please enter the dream car of the student. \n");
	scanf("%s", &newCar);
	if (newName&&newInitials&&newArtist&&newCar)
	{
		node * lastName = (node*)malloc(sizeof(node));
		strcpy(lastName->name, newName);
		strcpy(lastName->initials, newInitials);
		strcpy(lastName->artist, newArtist);
		strcpy(lastName->car, newCar);
		lastName->studentNumber = newStudentNumber;
		lastName->next_node = NULL;

		int shift = 0;
		while (shift == 0)
		{
			if (head->next_node != NULL)
			{
				head = head->next_node;
			}
			else if (head->next_node == NULL)
			{
				(head->next_node) = lastName;
				shift = 1;
				return 0;
			}
			else
			{
				printf("No more room for new studnets!");
			}
		}
	}
}

void removeStudentEnd(struct studentInfo *head)
{
	struct studentInfo *tempHead = head;

	int shift = 0;
	int counter=0;
	while (shift == 0)
	{
		if (tempHead->next_node != NULL)
		{
			tempHead = tempHead->next_node;
			counter++;
		}
		else if (tempHead->next_node == NULL)
		{
			counter++;
			break;
		}
	}
	for (int i = 1; i < (counter-1); i++)
	{
		head = head->next_node;
	}
	head->next_node = NULL;
	printf("\nStudent Removed. \n");
}

void removeSpecificStudent(struct studentInfo *head)
{
	int counter = 1;
	struct studentInfo *tempHead = head;
	int studentChosen;
	studentChosen = selectStudent(head);
	//printf("%d\n", studentChosen);
	while (tempHead != NULL)
	{
		if (tempHead->studentNumber != studentChosen)
		{
			tempHead = tempHead->next_node;
			counter++;
		}
		else if (tempHead->studentNumber == studentChosen)
		{
			//printf("%d\n", counter);
			break;
		}
	}
	while (head != NULL)
	{
		if (head->studentNumber != (studentChosen-1))
		{
			head = head->next_node;

		}
		else if (head->studentNumber == (studentChosen -1))
		{
			head->next_node = tempHead->next_node;
			break;
		}
	}
}


int resetStudentNumber(struct studentInfo *head)
{
	int startNum;
	startNum =head->studentNumber;
	while (head != NULL)
	{
		head->studentNumber = startNum;
		head = head->next_node;
		startNum++;
	}
}




