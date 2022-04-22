//
// Created by Abdullokh on 31/03/2022.
//Interface

#ifndef MIDTERMDRAFT_PERSON_H
#define MIDTERMDRAFT_PERSON_H
#include "University.h"

class Person : public University{
private:
    string first_name;
    string last_name;
    int age;
public:
    Person(string NameUniver, string FirstName, string LastName, int Age);
    void setFirstName(string first_name);
    void setLastName(string last_name);
    void setAge(int age);
    string getFirstName();
    string getLastName();
    int getAge();
    void display();
};
#endif //MIDTERMDRAFT_PERSON_H
