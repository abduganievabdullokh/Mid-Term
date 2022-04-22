//
// Created by Abdullokh on 01/04/2022.
//

#ifndef MIDTERMDRAFT_PROFESSOR_H
#define MIDTERMDRAFT_PROFESSOR_H
#include "Employee.h"

class Professor : public Employee{
private:
    string subject;
public:
    Professor(string NameUniver, string FirstName, string LastName, int Age, int Salary, string Subject);
    void setSubject(string subject);
    string getSubject();
    virtual void SubjectSkills() const = 0;
    void display();
};

#endif //MIDTERMDRAFT_PROFESSOR_H
