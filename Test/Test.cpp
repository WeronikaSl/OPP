#include <iostream>
#include <string>

class Address
{
    std::string street = {};
    int houseNo = 0;

public:
    Address(std::string street, int houseNo)
    {
        this->street = street;
        this->houseNo = houseNo;
    }
    Address()
    {
    }
};

class Student
{
    std::string name = {};
    Address address;


public: 
    Student(std::string name, Address address)
    {
        this->name = name;
        this->address = address;
    }
    std::string getName()
    {
        return name;
    }
};



int main()
{
    Address address1("Krolewska", 6);

    Student person1("Adam", address1);
    Student person2("Aga", address1);

    std::cout << person2.getName() << std::endl;


}
