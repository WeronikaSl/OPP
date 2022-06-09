#include <iostream>
#include <string>
#include "Student.hpp"

Adress::Adress(std::string street, int houseNo)
{
	this->street = street;
	this->houseNo = houseNo;
}

Adress::Adress()
{
}

Student::Student(std::string name, Adress adress, const int _yearOfBirth) : yearOfBirth(_yearOfBirth) //konstruktor const inta, on się stworzy zanim zrobi się cokolwiek innego, dlatego zadziała
{
	this->name = name;
	this->adress = adress;
	//yearOfBirth = _yearOfBirth; - nie zadziała, modyfikujemy wtedy const 
}

std::string Student::getName()
{
	return name;
}

std::string Student::preferredLanguage(const int _yearofBirth) const
{
	if (_yearofBirth <= 1970)
	{
		return "rosyjski";
	}
	else
	{
		return "angielski";
	}
}