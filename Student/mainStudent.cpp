#include <iostream>
#include <string>
#include "Student.hpp"


int main()
{
    Adress adress1("Krolewska", 5);
    Student person1("Weronika", adress1, 1999);

    std::cout << person1.preferredLanguage(person1.yearOfBirth);


}
