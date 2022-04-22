//
// Created by Abdullokh on 01/04/2022.
//

#ifndef MIDTERMDRAFT_EMPLOYEE_H
#define MIDTERMDRAFT_EMPLOYEE_H
#include "Person.h"

class Employee : public Person{
private:
    int salary;
public:
    Employee(string NameUniver, string FirstName, string LastName, int Age, int Salary);
    void setSalary(int salary);
    int getSalary();
    void display();
};

#endif //MIDTERMDRAFT_EMPLOYEE_H
