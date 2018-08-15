#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "person.h"

//using namespace IQT;

int log_roster(std::vector<Person>& , std::ofstream& );
int generate_roster(std::vector<Person>&);

int main()
{
    std::ofstream outfile("roster.txt");
    std::vector<Person> roster;

    int roster_size = generate_roster(roster);
    int logged_count = log_roster(roster, outfile);

    if(roster_size == logged_count)
        std::cout<<"Roster logged successfully";
    else
        std::cout<<"Roster size and logged count mismatch. Error!" << std::endl;
    roster.clear();

	getchar(); getchar();
    return 0;
    
}


//Arguments: std::vector<person>& roster - reference a vector containing the list of students in the class
//           std::ofstream& - a reference to the ofstream outfile object you will write too 
//Returns:  int count of the number of records written out 
//Purpose: write out the logic
int log_roster(std::vector<Person>& roster, std::ofstream& outfile)
{
	int counter = 0;//counter for number of people added to txt doc
	if (outfile.is_open())
	{
		for (int i = 0; i < size(roster); i++)//iterates through for the size of the roster
		{
			outfile << roster.at(i).getFname()<< "  ";//first name
			outfile << roster.at(i).getLname() << "  ";//last name
			outfile << roster.at(i).getAge() << "  ";//age
			outfile << roster.at(i).getGender() << "  ";//gender
			outfile << "\n";
			counter++;//incriments the counter
		}
	}
    return counter;//returns the number writen to the file
}

//Arguments: std::vector<Person>& roster - a reference to a vector that will contain the students you input 
//Returns: int count of the number of records input 
//Purpose: receive input and load the vector 
int generate_roster(std::vector<Person>& roster)
{
	int numNewPeople;
	int count=0;
	std::cout << "Please enter the number of people you would like to add to the roster \n";
	std::cin >> numNewPeople;//gets the number of poeple they want to add
	Person newAdd;// make a new person
	//create all the place holders for the new person
	std::string fName;
	std::string lName;
	int nextAge=0;
	char nextGender=0;
	//iterate through and add all the new information to the new person then add them to the roster
	for (int n = 0; n < numNewPeople; n++)
	{
		newAdd.setName(fName);
		newAdd.setLname(lName);
		newAdd.setAge(nextAge);
		newAdd.setGender(nextGender);
		roster.emplace_back(newAdd);
		count++;
	}
    return count;//returns the number of people written to the roster

}