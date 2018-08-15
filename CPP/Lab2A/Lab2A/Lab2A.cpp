/*
Kyle Yoder
Lab2A
8 Aug 2018
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>  // Needed for file
#include <vector> // needed for vectors
#include <list>
#include <map>


int wordList();
bool myfunction(int i, int j) { return (i<j); }
struct greater
{
	template<class T>
	bool operator()(T const &a, T const &b) const { return a > b; }
};

int main()
{
	int wait = 0;
	while (wait < 1)
	{
		std::ifstream file("lyrics.txt");
		std::string line;
		std::vector <std::string> words;
		std::vector <std::string> uniqueWords;
		std::vector <std::int16_t> numbers;
		std::map <std::int16_t, std::string > orderWords;
		std::vector <std::pair<std::int16_t, std::string>> sortedVector;

		//opens the file
		if (file.is_open())
		{
			//reads it in word by word and stores it inot a vector
			std::string word;
			while (file >> word)
			{
				words.emplace_back(word);
			}
			file.close(); //closes the file
		}
		//makes sure the file is there to open
		else
		{
			std::cout << "Unable to open file…";
		}

		//this will put all the words in order
		std::sort(words.begin(), words.end());

		//this makes a value to compair words against 
		std::string lastWord = " ";

		//this will loop through the sorted list and if it is not equal to the word before it it will count it
		for (const auto& item : words)
		{
			if (item != lastWord)
			{
				int mycount = std::count(words.begin(), words.end(), item);
				//std::cout << item << " | " << mycount << " |\n";
				sortedVector.emplace_back(mycount, item); //this puts the count and the word into a piared vector
			}
			lastWord = item;//compairs the lst word to this word to prevent multiples
		}

		std::sort(sortedVector.begin(), sortedVector.end(), greater());//this sorts the paired vector by greatest number
		
		for (auto item= sortedVector.begin();item !=sortedVector.end();item++)
		{
			std::cout << item->second<< "      " << "\t" << item->first << std::endl;
		}

		//enter any number to exit
		std::cin >> wait;
	}
	return 0;
	
}




//prints all the words in the vector of words can be used to debug
/*
for (const auto& item : words)
{
std::cout << item << std::endl;
}
*/

/*
while (changes >= 1)
{
changes = 0;
for (const auto& element : uniqueWords)
{
if (orderWords.at(element) > lastSize)
{
orderWords.begin(element);
}
}
}




for (const auto& each : numbers)
{
std::cout << orderWords.at(each) << " | " << each << std::endl;
}


std::sort(numbers.begin(), numbers.end(), greater());
for (const auto& item : numbers)
{
std::cout << item << std::endl;
}


//std::sort(words.begin(), words.end());



//orderWords.emplace(mycount, item );
//numbers.emplace_back(mycount);
//uniqueWords.emplace_back(item);
*/