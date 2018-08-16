#include <iostream>
#include <cstdlib>
#include <sstream>
#include <time.h>

void printMap(int x, int y);
int getMove();
int randomMove();
int main()
{

	int a = 1;
	int x = 0, y = 3;
	int lastx, lasty;
	
	
	

	printMap(x,y);
	std::cout << "\n";
	//printMap(4, 4);
	while (true)
	{
		a = getMove();
		if (a == 1)lasty = y++;
		if (a == 2) lasty = y--;
		if (a == 3) lastx = x++;
		if (a == 4) lastx = x--;
		if (x < 0 )
		{
			std::cout << "cant move off the map";
			x++;
		}
		else if ( x>4 )
		{
			std::cout << "cant move off the map";
			x--;
		}
		else if ( y < 0 )
		{
			std::cout << "cant move off the map";
			y++;
		}
		else if (y > 4)
		{
			std::cout << "cant move off the map";
			y--;
		}
		else
		{
			printMap(x, y);
		}

	}

	getchar(); getchar();
	return 0;
}


void printMap(int x, int y)
{
	char character = 'P';
	char grid[5][5] = { { '.', '.', '.', '.', '.' },
	{ '.', '.', '.', '.', '.' },
	{ '.', '.', '.', '.', '.' },
	{ '.', '.', '.', '.', '.' },
	{ '.', '.', '.', '.', '.' } };
	grid[x][y] = character;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			std::cout << grid[i][j];
			std::cout << " ";
		}
		std::cout << std::endl;
	}

}


int getMove()
{
	int a = 1;
	std::string input;
	std::cout << "Please enter your move ";
	std::cout << "	1 for right";
	std::cout << "	2 for left";
	std::cout << "	3 for down";
	std::cout << "	4 for up";
		while (true)
		{
			//Reverify that the age is of the appropriate type
			std::getline(std::cin, input);
			std::stringstream myStream(input);
			if (myStream >> a && a >= 1 && a <= 4)
			{
				break;
			}
			std::cout << "Invalid number, please try again" << std::endl;
		}
	
	return a;
}

int randomMove()
{

}


