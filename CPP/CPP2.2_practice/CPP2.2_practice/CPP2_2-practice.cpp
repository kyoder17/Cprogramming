/*
Kyle Yoder
CPP 2.2 practice
7 Aug 2018
*/

//#include <stdio.h>
#include <string>
#include <iostream>

int main()
{
	//make the string and print it
	std::string hello("Hello World");
	std::cout << hello << std::endl;

	//get the length and print it
	auto string_len = hello.length();
	std::cout << "Length is: " << string_len << std::endl;

	//make a substing only containing hello and print it	
	auto substring = hello.substr(0,5);
	std::cout << "Substring is: " << substring << std::endl;

	//find the location of the letter r
	auto rpos = hello.find("r");
	std::cout << "r is at location: " << rpos << std::endl;

	//append your name to the substing and print
	substring.append(" Kyle");
	std::cout << "New substring is: " << substring << std::endl;


	getchar(); getchar();
}