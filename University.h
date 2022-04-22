//
// Created by Abdullokh on 30/03/2022.
//Base class Interface

#ifndef MIDTERMDRAFT_UNIVERSITY_H
#define MIDTERMDRAFT_UNIVERSITY_H
#include <iostream>
#include <string>
using namespace std;

class University {
private:
    string name_univer;
public:
    University(string NameUniver);
    void setNameUniver(string name_univer);

    string getNameUniver();
    void display() ;
};

#endif //MIDTERMDRAFT_UNIVERSITY_H
