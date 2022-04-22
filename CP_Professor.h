//
// Created by Abdullokh on 01/04/2022.
//

#ifndef MIDTERMDRAFT_CP_PROFESSOR_H
#define MIDTERMDRAFT_CP_PROFESSOR_H
#include "Professor.h"

class CP_Professor : public Professor {
public:

    CP_Professor(string NameUniver, string FirstName, string LastName, int Age, int Salary, string Subject);

    void SubjectSkills() const override;

    void display();
};
#endif //MIDTERMDRAFT_CP_PROFESSOR_H
