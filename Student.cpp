//
// Created by Abdullokh on 31/03/2022.
//

#include "Student.h"
#include "Person.h"

Student::Student(string nameUniver, string firstName, string lastName,
                 int age, string StudentId, string Faculty, int TuitionFee)
                 :Person(nameUniver, firstName, lastName, age) {
    this-> student_id  = StudentId;
    this->faculty = Faculty;
    this-> tuition_fee = TuitionFee;
}
void Student::setStudentId(string student_id) {
    student_id = student_id;
}
void Student::setFaculty(string faculty) {
    faculty = faculty;
}
void Student::setTuitionFee(int tuition_fee) {
    tuition_fee = tuition_fee;
}

string Student::getStudentId(){
    return student_id;
}
string Student::getFaculty(){
    return faculty;
}
int Student::getTuitionFee(){
    return tuition_fee;
}

void Student::display(){
    Person::display();
    {
        cout << "Student id number is: " << student_id << endl
             << "Faculty: " << faculty << endl <<
             "Tuition fee: " << tuition_fee << endl;
    }
}