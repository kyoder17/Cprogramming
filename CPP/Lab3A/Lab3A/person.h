#pragma once
class Person {
private:
	std::string firstName;
	std::string lastName;
	int age;
	char gender;

public:
	std::string getFname() {
		return firstName;
	};
	std::string getLname() {
		return lastName;
	};
	int getAge() {
		return age;
	};
	char getGender() {
		return gender;
	};
	void setName(std::string fName) {
		std::cout << "Pelase enter first name" << std::endl;
		std::cin >> fName;
		firstName = fName;
	};
	void setLname(std::string lName) {
		std::cout << "Pelase enter last name" << std::endl;
		std::cin >> lName;
		lastName = lName;
	};
	void setAge(int nextAge) {
		std::cout << "Pelase enter age" << std::endl;
		std::cin >> nextAge;
		age = nextAge;
	};
	void setGender(char nextGender) {
		std::cout << "Pelase enter gender(M/F)" << std::endl;
		std::cin >> nextGender;
		gender = nextGender;
	};
};