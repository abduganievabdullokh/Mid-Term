//
// Created by Abdullokh on 01/04/2022.
//

#include "Professor.h"

Professor::Professor(string NameUniver, string FirstName, string LastName, int Age, int Salary, string Subject)
: Employee(NameUniver, FirstName, LastName, Age, Salary){
    this->subject = Subject;
}
void Professor::setSubject(string subject) {
    subject = subject;
}
string Professor::getSubject() {
    return subject;
}

void Professor::display(){
    Employee::display();{
      cout << "Works as " << subject << " professor at " << getNameUniver() << " University" <<  endl;
    }
}
