//
// Created by Abdullokh on 30/03/2022.
//Base class implementation

#include "University.h"
University::University(string NameUniver) {
    this-> name_univer = NameUniver;
}

void University::setNameUniver(string name_univer) {
    name_univer = name_univer;
}
string University::getNameUniver() {
    return name_univer;
}
void University::display() {
     cout << name_univer << " University. " << endl;
}
