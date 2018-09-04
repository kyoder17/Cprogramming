#include <string>
#include <iostream>
#include <windows.h>
#include <limits>


void treeArt();
void treeArt2();
void printMap(int x, int y, int m, int n);
void printMap2();


void color();
void colorReset();

void main()
{
	//treeArt();
	//treeArt();

	color();

	printMap2();
	colorReset();
	printMap2();
	//printMap(1,1,2,2);
	getchar(); getchar();
}

enum {
	black,
	dark_blue,
	dark_green,
	dark_cyan,
	dark_red,
	dark_magenta,
	dark_yellow,
	light_gray,
	dark_gray,
	light_blue,
	light_green,
	light_cyan,
	light_red,
	light_magenta,
	light_yellow,
	white
};
void treeArt()
{

	std::cout << "     ###"<<std::endl;
	std::cout << "    #o###" << std::endl;
	std::cout << "  #####o###" << std::endl;
	std::cout << " #o#\#|#/ ###" << std::endl;
	std::cout << "  ###\|/#o#" << std::endl;
	std::cout << "   # }|{  #" << std::endl;
	std::cout << "     }|{" << std::endl;


}
void treeArt2()
{
	char grid[15][15] = { "     ###" ,
		"    #o###" ,
		"  #####o###" ,
		" #o#\#|#/ ###" ,
		"  ###\|/#o#" ,
		"   # }|{  #" ,
		"     }|{" ,
	};
}


void printMap(int x, int y, int m, int n)
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
			//treeArt2();
			//std::cout << grid[i][j];
			printMap2();
			std::cout << " ";

		}
		std::cout << std::endl;
	}

}
void printMap2()
{
	char grid[10][60] = {	"     ###          ###          ###            ###         ",
							"    #o###        #o###         #o###         #o###        ",
							"  #####o###    #####o###    #####o###    #####o###        ",
							"  #o#\#|#/ ###  #o#\#|#/ ###  #o#\#|#/ ###  #o#\#|#/ ###  ",
							"   ###\|/#o#     ###\|/#o#     ###\|/#o#     ###\|/#o#    ",
							"   # }|{  #     # }|{   #    # }|{  #     # }|{  #        ",
							"     }|{          }|{          }|{          }|{           ",
			};
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 60; j++)
		{
			//treeArt();
			std::cout << grid[i][j];
			//std::cout << " ";
		}
		std::cout << std::endl;
	}
}


void color()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), light_blue);
}
void colorReset()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), white);
}