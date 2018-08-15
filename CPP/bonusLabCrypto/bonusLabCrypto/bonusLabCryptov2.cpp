/*
Kyle Yoder
Cryto bonus lab
9 Aug 2018
*/

#include <iostream>
#include <string>


int main()
{

	std::string value("this is a test");
	std::string encoded("");
	for (int i = 0; i < value.size(); i++)
	{
		encoded.append("l");
	}
	//encoded.copy(value,0,6);
	for (const auto& element : encoded)
	{
		std::cout << encoded;
	}

	getchar();
	return 0;
}
