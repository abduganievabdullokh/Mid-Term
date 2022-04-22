//
// Created by Abdullokh on 01/04/2022.
//

#include "Speaking_Professor.h"

void Speaking_Professor::SubjectSkills() const {
    cout << "Very good at his work, always asks to be responsible from students" << endl;
}

Speaking_Professor::Speaking_Professor(string NameUniver, string FirstName, string LastName, int Age, int Salary, string Subject)
        : Professor(NameUniver, FirstName, LastName, Age, Salary, Subject){};

void Speaking_Professor::display() {
    Professor::display();
    Speaking_Professor::SubjectSkills();
}