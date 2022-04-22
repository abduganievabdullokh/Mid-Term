//
// Created by Abdullokh on 31/03/2022.
//

#include "Person.h"
Person::Person(string nameUniver, string FirstName, string LastName, int Age)
: University(nameUniver) {
    this-> first_name = FirstName;
    this-> last_name = LastName;
    this-> age = Age;
}

void Person::setFirstName(string first_name){
    first_name = first_name;
};
void Person::setLastName(string last_name){
    last_name = last_name;
};
void Person::setAge(int age){
    age = age;
};
string Person::getFirstName(){
    return first_name;
};
string Person::getLastName(){
    return last_name;
};
int Person::getAge(){
    return age;
};
void Person::display(){
    University::display();{
        cout << "First name: " << first_name << endl << "Last name: "
        << last_name << endl << "Age: "
        << age << endl;

    }
}
