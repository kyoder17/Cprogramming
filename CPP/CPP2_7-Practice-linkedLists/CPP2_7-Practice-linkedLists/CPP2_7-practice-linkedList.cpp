/*
Kyle Yoder
CPP 2.7 linked list practice
8 Aug 2018
*/

#include <iostream>
#include <list>
#include <sstream>
#include <forward_list>


void menu();



int main()
{
	std::string input = "";
	std::list<int> numbers;
	std::forward_list<int> numbers2;
	auto listAdd = 0;
	auto nextValue = 0;
	int userInput = 99;
	int count = 0;
	while (userInput != 0)
	{
		menu();
		while (true)
		{
			std::getline(std::cin, input);
			// This code converts from string to number safely.
			std::stringstream myStream(input);
			if (myStream >> userInput)
				break;
			std::cout << "Invalid number, please try again" << std::endl;
		}
		switch (userInput)
		{
			case 1:
				while (true)
				{
					std::cout << "Please enter the number of values you would like to add to the list. " << std::endl;

					std::getline(std::cin, input);
					// This code converts from string to number safely.
					std::stringstream myStream(input);
					if (myStream >> listAdd)
						break;
					std::cout << "Invalid number, please try again" << std::endl;
				}
				for (int i = 0; i < listAdd; i++)
				{
					std::cout << "Please enter the next value" << std::endl;
					while (true)
					{
						std::getline(std::cin, input);
						// This code converts from string to number safely.
						std::stringstream myStream(input);
						if (myStream >> nextValue)
							break;
						std::cout << "Invalid number, please try again" << std::endl;
					}
					numbers.emplace_back(nextValue);
				}
				break;
			case 2:
				std::cout << "\n";
				std::cout << "\n";
				for (const auto& elem : numbers)
				{
					std::cout << elem << "\n";
				}
				std::cout << "\n";
				//std::cout << "test" << std::endl;
				break;
			case 3:
				numbers.pop_back();
				break;
			case 4:				
				while (true)
				{
				std::cout << "Please enter the number of values you would like to add to the list. " << std::endl;

				std::getline(std::cin, input);
				// This code converts from string to number safely.
				std::stringstream myStream(input);
				if (myStream >> listAdd)
					break;
				std::cout << "Invalid number, please try again" << std::endl;
				}
				for (int i = 0; i < listAdd; i++)
				{
					std::cout << "Please enter the next value" << std::endl;
					while (true)
					{
						std::getline(std::cin, input);
						// This code converts from string to number safely.
						std::stringstream myStream(input);
						if (myStream >> nextValue)
							break;
						std::cout << "Invalid number, please try again" << std::endl;
					}
					numbers2.emplace_front(nextValue);
				}
				break;
			case 5:
				std::cout << "\n";
				std::cout << "\n";
				for (const auto& elem : numbers2)
				{
					std::cout << elem << "\n";
				}
				std::cout << "\n";
				break;
			case 6:
				numbers2.pop_front();
				break;
		}
	}

}

void menu()
{
	std::cout << "Please select what option you would like to use" << std::endl;
	std::cout << "	Enter 1 to add to the list" << std::endl;
	std::cout << "	Enter 2 to print the whole list" << std::endl;
	std::cout << "	Enter 3 to pop a number off the list" << std::endl;
	std::cout << "	Enter 4 to add to the list forward_list" << std::endl;
	std::cout << "	Enter 5 to print the whole  forward_list" << std::endl;
	std::cout << "	Enter 6 to pop a number off the  forward_list" << std::endl;
	std::cout << "	Enter 0 to exit" << std::endl;
}