//
// Created by Abdullokh on 01/04/2022.
//

#include "CP_Professor.h"

 void CP_Professor::SubjectSkills()const{
    cout << "He has the best teaching skills ";
}

CP_Professor::CP_Professor(string NameUniver, string FirstName, string LastName, int Age, int Salary, string Subject)
        : Professor(NameUniver, FirstName, LastName, Age, Salary, Subject){};

void CP_Professor::display() {
   Professor::display();

}
