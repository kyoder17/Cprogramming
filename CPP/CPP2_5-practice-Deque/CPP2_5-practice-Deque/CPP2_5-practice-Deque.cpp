/*
Kyle Yoder
CPP 2.5 practice Deque
7 Aug 2018
*/

#include <iostream>
#include <deque>

#include <string>
#include <sstream>




int addAll(std::deque<int> &listOfNumbers);
int subAll(std::deque<int> &listOfNumbers);

void print_menu();
int main()
{
	std::string input;
	std::deque<int> listOfNumbers;
	int userInput = 99;
	auto nextNum = 0;
	auto num_of_numbers = 0;

	while (userInput != 0)
	{
		print_menu();
		while (1)
		{
			std::cin >> userInput;
			//This sections validates whether the user selected a number 0 - 4 or put in junk
			/*
			std::getline(std::cin, input);
			std::stringstream myStream(input);
			if (myStream >> userInput)
			{
				break;
			}
			std::cout << "Invalid number, please try again" << std::endl;
		}
		*/
			switch (userInput)
			{
			case 1:

				std::cout << "Please enter the quantity of numbers you wish to store: " << std::endl;

				std::cin >> num_of_numbers;


				//create a vector and a place holder variable


				//read in the number from the user and put it into the vector
				for (int i = 0; i < num_of_numbers; i++)
				{
					std::cout << "Enter the next number: " << std::endl;
					std::cin >> nextNum;
					listOfNumbers.push_back(nextNum);
				}
			case 2:
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
					for (int k = 0; k < listOfNumbers.size(); k++)
					{
						std::cout << listOfNumbers.at(k) << std::endl;
					}
					std::cout << "\n" << std::endl;
				}
			case 3:
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
			case 4:
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
			case 5:
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
					for (int k = 0; k < listOfNumbers.size(); k++)
					{
						if (numLocation == k)
						{
							listOfNumbers.insert(listOfNumbers.begin() + k, newNum2);
						}

					}
					std::cout << "\n" << std::endl;
				}
			case 6:
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

					for (int k = 0; k < listOfNumbers.size(); k++)
					{
						if (numLocation == k)
						{
							listOfNumbers.erase(listOfNumbers.begin() + numLocation);
						}

					}
					std::cout << "\n" << std::endl;
				}
			case 7:
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
			case 8:
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
			case 9:
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
	}
}




void print_menu()
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
	std::cout << "	Enter 0 to exit" << std::endl;
	//std::cout << "Exit (0)\n\n";
}
int addAll(std::deque<int> &listOfNumbers)
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


int subAll(std::deque<int> &listOfNumbers)
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