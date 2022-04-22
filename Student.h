//
// Created by Abdullokh on 31/03/2022.
//

#ifndef MIDTERMDRAFT_STUDENT_H
#define MIDTERMDRAFT_STUDENT_H
#include "Person.h"

class Student : public Person {
private:
    string student_id;
    string faculty;
    int tuition_fee;
public:
    Student(string nameUniver, string firstName, string lastName, int age, string StudentId ,
            string Faculty, int TuitionFee);

    void setStudentId(string student_id);
    void setFaculty(string faculty);
    void setTuitionFee(int tuition_fee);
    string getStudentId();
    string getFaculty();
    int getTuitionFee();
    void display();
};

#endif //MIDTERMDRAFT_STUDENT_H
