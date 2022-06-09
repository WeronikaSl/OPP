#pragma once
#include <string>

struct Adress
{
	std::string street = {};
	int houseNo = 0;
	Adress(std::string street, int houseNo);
	Adress();
};

class Student
{
	std::string name = {};
	Adress adress;


public: 
	const int yearOfBirth;
	Student(std::string name, Adress adress, const int _yearOfBirth);
	std::string getName();
	std::string preferredLanguage(int _yearOfBirth) const;

};

