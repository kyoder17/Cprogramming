/*
Kyle Yoder
CPP2-4 practice maps
7 Aug 2018
*/

#include <iostream>
#include <map>
#include <string>
#include <stdio.h>


std::map<std::string, std::string> listOfPeople;
std::map<std::string, std::string>::iterator findPerson;


int main()
{
	listOfPeople.emplace("name", "job");
	int userSelection = 0;
	std::string name;
	std::string lookup;
	std::string removeName;
	std::string job;
	int wasThere = 0;
	//std::map<std::string, std::string>listOfPeople;
	while (userSelection < 9)
	{
		std::cout << "Please select what option you would like to use" << std::endl;
		std::cout << "	Enter 1 to input a person and thier job" << std::endl;
		std::cout << "	Enter 2 to look someone up by name" << std::endl;
		std::cout << "	Enter 3 to delete someone from the list" << std::endl;
		std::cout << "	Enter 9 to exit" << std::endl;
		std::cout << "\n" << std::endl;
		std::cin >> userSelection;
		//this option will allow for additonal entries into the list
		if (userSelection == 1)
		{
			int counter = 0;
			std::cout << "\n" << std::endl;
			std::cout << "Please enter the name you wish to add" << std::endl;
			std::cin >> name;
			std::cout << "Please enter thier job you wish to add" << std::endl;
			std::cin >> job;

			listOfPeople.emplace(name, job);
			//std::cout << listOfPeople.at(name) << std::endl;
			for (const auto& element : listOfPeople)
			{
				std::cout << element.first << std::endl;
			}
		}
		//this option will allow for the printing of a specified person
		else if (userSelection == 2)
		{
			std::cout << "\n" << std::endl;
			std::cout << "Current list of poeple includes: \n" << std::endl;
			for (const auto& element : listOfPeople)
			{
				std::cout << element.first << std::endl;
			}

			std::cout << "\nPlease enter the name you would like to look up" << std::endl;
			std::cin >> lookup;
			findPerson = listOfPeople.find(lookup);
			if (findPerson == listOfPeople.end())
			{
				std::cout << "The selected name was not in the list please try again!\n\n" << std::endl;
			}
			else
			{
				std::cout << listOfPeople.at(lookup) << std::endl;
			}
		}

		//this option allows for the selection and deletion of a specified person
		else if (userSelection == 3)
		{
			std::cout << "\n" << std::endl;
			std::cout << "Current list of poeple includes: \n" << std::endl;
			for (const auto& element : listOfPeople)
			{
				std::cout << element.first << std::endl;
			}
			std::cout << "\nPlease enter the name you would like to remove" << std::endl;
			std::cin >> removeName;

			findPerson = listOfPeople.find(removeName);
			if (findPerson == listOfPeople.end())
			{
				std::cout << "The selected name was not in the list please try again!\n\n" << std::endl;
			}
			else
			{
				listOfPeople.erase(removeName);
			}
		}
	}
}