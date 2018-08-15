/*
Kyle Yoder
CPP 2-3 practice
7 Aug 2018
*/

#include <iostream>
#include <vector>
#include <stdio.h>

int addAll(std::vector<int> &listOfNumbers);
int subAll(std::vector<int> &listOfNumbers);


int main()
{
	auto userSelection = 0;
	std::vector<int> listOfNumbers;
	while (userSelection < 10)
	{
		std::cout << "Please select which option you would like to use: " << std::endl;
		std::cout << "	Enter 1 to create a list of numbers" << std::endl;
		std::cout << "	Enter 2 to remove the last number entered" << std::endl;
		std::cout << "	Enter 3 to clear the entire list" << std::endl;
		std::cout << "	Enter 4 to enter another number to the end of the list" << std::endl;
		std::cout << "	Enter 5 to enter another number at a chosen location" << std::endl;
		std::cout << "	Enter 6 to enter delete a number at a chosen location" << std::endl;
		std::cout << "	Enter 7 to add all numbers to the first number in the list" << std::endl;
		std::cout << "	Enter 8 to subtract all numbers to the first number in the list" << std::endl;
		std::cout << "	Enter 9 to print the entire list" << std::endl;
		std::cout << "	Enter 10 to exit" << std::endl;
		std::cin >> userSelection;



		if (userSelection == 1)
		{
			//get he number of number to be entered
			std::cout << "Please enter the quantity of numbers you wish to store: " << std::endl;
			auto num_of_numbers = 0;
			std::cin >> num_of_numbers;

			//create a vector and a place holder variable
			
			auto nextNum = 0;
			//read in the number from the user and put it into the vector
			for (int i = 0; i < num_of_numbers; i++)
			{
				std::cout << "Enter the next number: " << std::endl;
				std::cin >> nextNum;
				listOfNumbers.push_back(nextNum);
			}

		}
		else if (userSelection == 2)
		{
			if (listOfNumbers.size() == 0)
			{
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
				std::cout << "Must create a list of numbers first please chose option 1" << std::endl;
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
			}
			else if (listOfNumbers.size() > 0)
			{
				listOfNumbers.pop_back();
				std::cout << "\nThe new list is: " << std::endl;
				for (int k = 0; k<listOfNumbers.size(); k++)
				{
					std::cout << listOfNumbers.at(k) << std::endl;
				}
				std::cout << "\n" << std::endl;
			}
		}
		
		else if (userSelection == 3)
		{
			if (listOfNumbers.size() == 0)
			{
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
				std::cout << "Must create a list of numbers first please chose option 1" << std::endl;
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
			}
			else if (listOfNumbers.size() > 0)
			{
				listOfNumbers.clear();
				std::cout << "\n" << std::endl;
			}
		}
		else if (userSelection == 4)
		{
			if (listOfNumbers.size() == 0)
			{
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
				std::cout << "Must create a list of numbers first please chose option 1" << std::endl;
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
			}
			else if (listOfNumbers.size() > 0)
			{
				int nextNum2;
				std::cout << "Enter the new number: " << std::endl;
				std::cin >> nextNum2;
				listOfNumbers.push_back(nextNum2);
				std::cout << "\n" << std::endl;
			}
		}

		else if (userSelection == 5)
		{
			if (listOfNumbers.size() == 0)
			{
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
				std::cout << "Must create a list of numbers first please chose option 1" << std::endl;
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
			}
			else if (listOfNumbers.size() > 0)
			{
				int newNum2;
				int numLocation;
				std::cout << "Enter the index where you would like the new number added (index starts at 0): " << std::endl;
				std::cin >> numLocation;
				std::cout << "Enter the new number: " << std::endl;
				std::cin >> newNum2;
				for (int k = 0; k<listOfNumbers.size(); k++)
				{
					if (numLocation == k)
					{
						listOfNumbers.insert(listOfNumbers.begin() + k, newNum2);
					}
					
				}
				std::cout << "\n" << std::endl;
			}
		}


		else if (userSelection == 6)
		{
			if (listOfNumbers.size() == 0)
			{
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
				std::cout << "Must create a list of numbers first please chose option 1" << std::endl;
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
			}
			else if (listOfNumbers.size() > 0)
			{
				int newNum2;
				int numLocation;
				std::cout << "Enter the index where you would like the number deleted (index starts at 0): " << std::endl;
				std::cin >> numLocation;

				for (int k = 0; k<listOfNumbers.size(); k++)
				{
					if (numLocation == k)
					{
						listOfNumbers.erase(listOfNumbers.begin() +numLocation);
					}

				}
				std::cout << "\n" << std::endl;
			}
		}


		else if (userSelection == 7)
		{
			if (listOfNumbers.size() == 0)
			{
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
				std::cout << "Must create a list of numbers first please chose option 1" << std::endl;
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
			}
			else if (listOfNumbers.size() > 0)
			{
				//add all the numbers together and print the result
				addAll(listOfNumbers);

			}
		}
		else if (userSelection == 8)
		{
			if (listOfNumbers.size() == 0)
			{
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
				std::cout << "Must create a list of numbers first please chose option 1" << std::endl;
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
			}
			else if (listOfNumbers.size() > 0)
			{
				//subtract all the numbers from the first one and print the result
				subAll(listOfNumbers);
			}
		}

		else if (userSelection == 9)
		{
			if (listOfNumbers.size() == 0)
			{
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
				std::cout << "Must create a list of numbers first please chose option 1" << std::endl;
				std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
			}
			else if (listOfNumbers.size() > 0)
			{
				std::cout << "\nThe current list is: " << std::endl;
				for (const auto& item : listOfNumbers)
				{
					std::cout << item << std::endl;
				}
				std::cout << "\n" << std::endl;
			}
		}
	}


	getchar(); getchar();

}

int addAll(std::vector<int> &listOfNumbers)
{
	signed int addValue = listOfNumbers[0];
	for (int k = 1; k < listOfNumbers.size(); k++)
	{
		addValue = addValue + listOfNumbers.at(k);
	}
	std::cout << "\nThe addtion of all the values entered its: " << addValue << std::endl;
	std::cout << "\n" << std::endl;
	return 0;
}


int subAll(std::vector<int> &listOfNumbers)
{
	signed int subValue = listOfNumbers[0];
	for (int k = 1; k < listOfNumbers.size(); k++)
	{
		subValue = subValue - listOfNumbers.at(k);
	}
	std::cout << "\nThe subtaction of all the values entered its: " << subValue << std::endl;
	std::cout << "\n" << std::endl;
	return 0;
}


/*
for(int k=0;k<listOfNumbers.size();k++)
{
std::cout << listOfNumbers.at(k) << std::endl;
}
*/