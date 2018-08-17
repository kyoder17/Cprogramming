#include <iostream>
#include <cstdlib>
#include <sstream>
#include <time.h>

void printMap(int x, int y,int m,int n);

char getMove();
int check_overlap(int x, int y, int m, int n);
int main()
{
	int overlapValue = 1;
	int player = 1;
	char a = 1;
	int x = 0, y = 3, n = 2, m = 3;
	int lastx, lasty;


	printMap(x,y,m,n);
	std::cout << "\n";

	while (true)
	{
		if (player == 1)
		{
			a = getMove();
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
			else if (x > 4)
			{
				std::cout << "cant move off the map";
				x--;
			}
			else if (y < 0)
			{
				std::cout << "cant move off the map";
				y++;
			}
			else if (y > 4)
			{
				std::cout << "cant move off the map";
				y--;
			}
			else if (overlapValue == 1)
			{
				printMap(x, y, m, n);
				player = 2;
			}
			else
			{

			}
		}
			
		
		else if (player == 2)
		{
			a = getMove();

			
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
				else if (m > 4)
				{
					std::cout << "cant move off the map";
					m--;
				}
				else if (n < 0)
				{
					std::cout << "cant move off the map";
					n++;
				}
				else if (n > 4)
				{
					std::cout << "cant move off the map";
					n--;
				}
				else if(overlapValue==1)
				{
					printMap(x, y, m, n);
					player = 1;
				}
			
		}
	}

	getchar(); getchar();
	return 0;
}


void printMap(int x, int y,int m,int n)
{
	char character1 = '1';
	char character2 = '2';
	char grid[6][6];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++)
		{
			grid[i][j] = { '.' };
		}
		std::cout << std::endl;
	}
	grid[x][y] = character1;
	grid[m][n] = character2;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++)
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
		while (true)
		{
			//Reverify that the age is of the appropriate type
			std::getline(std::cin, input);
			std::stringstream myStream(input);
			if (myStream >> a && a =='a'|| a=='d'||a=='s'||a=='w')
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

