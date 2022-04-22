//
// Created by Abdullokh on 01/04/2022.
//

#include "Employee.h"

Employee::Employee(string NameUniver, string FirstName, string LastName, int Age, int Salary)
: Person(NameUniver,FirstName, LastName,Age){
    this-> salary = Salary;
}
void Employee::setSalary(int salary) {
    salary = salary;
}
int Employee::getSalary() {
    return salary;
}
void Employee::display(){
    Person::display();{   
     cout << "Salary: " << salary << endl;
    }
}