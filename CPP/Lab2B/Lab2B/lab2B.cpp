#include <iostream>
#include <stack>
#include <vector>
#include <string>

int Setup(std::stack<int>& tower, int n);
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>&, int n, std::string S, std::string D, std::string T );
void display(std::stack<int> tower);
static int numMoves = 0;

int main()
{
    std::stack<int> TowerA;
    std::stack<int> TowerB;
    std::stack<int> TowerC;

	int n = 0;      //Number of discs 
	std::cout << "Please enter the number of disks you with to use." << std::endl;
	std::cin >> n;

	std::string S = "Tower A";
	std::string D = "Tower C";
	std::string T = "Tower B";
    n = Setup(TowerA, n);
    Hanoi(TowerA, TowerC, TowerB, n,S,D,T);
    std::cout<<"Displaying contents of tower A: " << std::endl;
    display(TowerA);
     std::cout<<"Displaying contents of tower B: " << std::endl;
    display(TowerB);
     std::cout<<"Displaying contents of tower C: " << std::endl;
    display(TowerC);
    std::cout<<"Number of steps to solve: " << numMoves << std::endl;

	getchar(); getchar();
	return 0;

}

//Arguments: std::stack<int>& towerA - a stack container that will be setup with a number of discs 
//           int n - a number that represents the number of discs to load on to the tower stack
//Return     the number of discs that were loaded on to the tower 
//Functionality: Load a number of discs in ascending order on to the stack 
int Setup(std::stack<int>& tower, int n)
{
	int diskCounter=0;

	for (int i = n; i >= 1; i--)
	{
		//std::cout << i << std::endl;
		tower.push(i);

		diskCounter++;
	}
    return diskCounter;
}

//Arguments: std::stack<int>& source - the tower that discs will be moved from
//           std::stack<int>& dest - the twoer that discs will be moved to 
//           std::stack<int>& temp - a tower that can hold discs 
//           int n - the number of discs on the source tower
//Return     none
//Functionality: Move a tower from source to another tower. 

//variable S =the name of the current move source tower, D=current move destination tower, T=current move temp tower
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>& temp, int n,std::string S, std::string D, std::string T)
{
	int xValue = 0;
	numMoves++;
	if (n == 1)
	{
		
		dest.push( source.top());//this is what moves the current disk
		source.pop();//this is what removes the current disk

		std::cout << "\n";
		//by creating 3 temp stacks we can pop each one out each time we iterate through to get all disks to display without effecting current value
		std::stack<int>temp1 = source;
		std::stack<int>temp2 = dest;
		std::stack<int>temp3 = temp;
		std::cout << "\n\n" << S << " below" <<std::endl;
		while (!temp1.empty())
		{
			//std::cout << temp1.top() << std::endl;
			xValue = temp1.top();
			for (int x = 0; x < xValue; x++)//this will print 'x' equal to the values of each disk 
			{
				std::cout << "x";
			}
			std::cout << "\n";
			temp1.pop();
		}
		std::cout << "\n\n" << T << " below" << std::endl;
		while (!temp3.empty())
		{
			//std::cout << temp1.top() << std::endl;
			xValue = temp3.top();
			for (int x = 0; x < xValue; x++)//this will print 'x' equal to the values of each disk 
			{
				std::cout << "x";
			}
			std::cout << "\n";
			temp3.pop();
		}
		std::cout << "\n\n" << D <<" below"<< std::endl;
		while (!temp2.empty())
		{
			//std::cout << temp2.top() << std::endl;
			xValue = temp2.top();
			for (int x = 0; x < xValue; x++)//this will print 'x' equal to the values of each disk 
			{
				std::cout << "x";
			}
			std::cout << "\n";

			temp2.pop();
		}
		std::cout << "\nNext Move\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	}







	else
	{
		Hanoi(source,  temp, dest,n - 1,S,T,D);
		dest.push(source.top());
		source.pop();
		std::stack<int>temp1 = source;
		std::stack<int>temp2 = dest;
		std::stack<int>temp3 = temp;
		std::cout << "\n\n" << S << " below" << std::endl;
		while (!temp1.empty())
		{
			//std::cout << temp1.top() << std::endl;
			xValue = temp1.top();
			for (int x = 0; x < xValue; x++)//this will print 'x' equal to the values of each disk 
			{
				std::cout << "x";
			}
			std::cout << "\n";
			temp1.pop();
		}
		std::cout << "\n\n" << T << " below" << std::endl;
		while (!temp3.empty())
		{
			//std::cout << temp1.top() << std::endl;
			xValue = temp3.top();
			for (int x = 0; x < xValue; x++)//this will print 'x' equal to the values of each disk 
			{
				std::cout << "x";
			}
			std::cout << "\n";
			temp3.pop();
		}
		std::cout << "\n\n" << D << " below" << std::endl;
		while (!temp2.empty())
		{
			//std::cout << temp2.top() << std::endl;
			xValue = temp2.top();
			for (int x = 0; x < xValue; x++)//this will print 'x' equal to the values of each disk 
			{
				std::cout << "x";
			}
			std::cout << "\n";

			temp2.pop();
		}
		std::cout << "\nNext Move\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
		Hanoi(temp, dest, source, n - 1,T,D,S);
	}
 
}







//Arguments: std::stack<int>& tower - a tower that has discs to dispay
//Return     none
//Functionality: Display the contents of a tower
void display(std::stack<int> tower)     
{

	int xValue = 0;
	while(!tower.empty())
	{
		xValue = tower.top();
		for (int x = 0; x < xValue; x++)//this will print 'x' equal to the values of each disk 
		{
			std::cout << "x";
		}
		std::cout << "\n";
		tower.pop();
	}
}


