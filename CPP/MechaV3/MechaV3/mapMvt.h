#include <iostream>
#include <cstdlib>
#include <sstream>
#include <time.h>
#include <vector>

#include "mecha.h"
#include "mecha_subs.h"


void printMap(int x, int y, int m, int n);
void printMap2(NEXT player1, NEXT player2);
char getMove();
int check_overlap(int x, int y, int m, int n);
NEXT mapMvt(int player, NEXT player1, NEXT player2)
{
	int overlapValue = 1;
	//int player = 1;
	char a = 1;
	int x = player1.retrunMechaX(), y = player1.returnMechaY(), n = player2.retrunMechaX(), m = player2.returnMechaY();
	//std::vector<int> locationMecha;
	//locationMecha
	int lastx, lasty;


	//printMap(x, y, m, n);
	std::cout << "\n";


	if (player == 1)
	{
		for (int i = 1; i <= player1.getSpeed(); i++)
		{
			a = getMove();
			if (a == 'e')
			{
				return player1;
			}
			if (a == 'd')lasty = y++;
			if (a == 'a') lasty = y--;
			if (a == 's') lastx = x++;
			if (a == 'w') lastx = x--;
			overlapValue = check_overlap(x, y, m, n);
			if (x < 0)
			{
				std::cout << "cant move off the map";
				x++;
			}
			else if (x > 10)
			{
				std::cout << "cant move off the map";
				x--;
			}
			else if (y < 0)
			{
				std::cout << "cant move off the map";
				y++;
			}
			else if (y > 10)
			{
				std::cout << "cant move off the map";
				y--;
			}
			else if (overlapValue == 1)
			{
				player1.setMechaX(x);
				player1.setMechaY(y);
				printMap2(player1, player2);
				
				//printMap(x, y, m, n);
				//player = 2;
			}
		}
		return player1;
	}


		else if (player == 2)
		{
			for (int i = 1; i <= player2.getSpeed(); i++)
			{
				a = getMove();
				if (a == 'e')
				{
					return player2;
				}
				if (a == 'd')lasty = n++;
				if (a == 'a') lasty = n--;
				if (a == 's') lastx = m++;
				if (a == 'w') lastx = m--;
				overlapValue = check_overlap(x, y, m, n);
				if (m < 0)
				{
					std::cout << "cant move off the map";
					m++;
				}
				else if (m > 10)
				{
					std::cout << "cant move off the map";
					m--;
				}
				else if (n < 0)
				{
					std::cout << "cant move off the map";
					n++;
				}
				else if (n > 10)
				{
					std::cout << "cant move off the map";
					n--;
				}
				else if (overlapValue == 1)
				{
					player2.setMechaX(m);
					player2.setMechaY(n);
					printMap2(player1, player2);
					//printMap(x, y, m, n);
					//player = 1;
				}
			}
			return player2;
		}
	

	//getchar(); getchar();
	return player1;
}



void printMap2(NEXT player1, NEXT player2)
{

	char character1 = '1';
	char character2 = '2';
	char grid[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
		{
			grid[i][j] = { '.' };
		}
		std::cout << std::endl;
	}
	int x;
	x = player1.retrunMechaX();
	int y;
	y = player1.returnMechaY();
	grid[x][y] = character1;
	int m;
	m = player2.retrunMechaX();
	int n;
	n = player2.returnMechaY();
	grid[m][n] = character2;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
		{
			std::cout << grid[i][j];
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}


char getMove()
{
	char a = 1;
	std::string input;
	std::cout << "Please enter your move ";
	std::cout << "	d for right";
	std::cout << "	a for left";
	std::cout << "	s for down";
	std::cout << "	w for up";
	std::cout << "	e to exit movement";
	while (true)
	{
		//Reverify that the age is of the appropriate type
		std::getline(std::cin, input);
		std::stringstream myStream(input);
		if (myStream >> a && a == 'a' || a == 'd' || a == 's' || a == 'w')
		{
			break;
		}
		std::cout << "Invalid number, please try again" << std::endl;
	}

	return a;
}


int check_overlap(int x, int y, int m, int n)
{
	if (x == m && y == n)
	{

		std::cout << "Can not move into an occupied space";
		return 0;
	}
	return 1;
}



/*
void printMap(int x, int y, int m, int n)
{
char character1 = '1';
char character2 = '2';
char grid[10][10];
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 10; j++)
{
grid[i][j] = { '.' };
}
std::cout << std::endl;
}

grid[x][y] = character1;
grid[m][n] = character2;
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 10; j++)
{
std::cout << grid[i][j];
std::cout << " ";
}
std::cout << std::endl;
}
}

*/