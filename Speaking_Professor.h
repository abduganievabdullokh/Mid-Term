//
// Created by Abdullokh on 01/04/2022.
//

#ifndef MIDTERMDRAFT_SPEAKING_PROFESSOR_H
#define MIDTERMDRAFT_SPEAKING_PROFESSOR_H
#include "Professor.h"

class Speaking_Professor : public Professor{
public:
    void SubjectSkills() const override;
    Speaking_Professor(string NameUniver, string FirstName, string LastName, int Age, int Salary, string Subject);

    void display();
};

#endif //MIDTERMDRAFT_SPEAKING_PROFESSOR_H
