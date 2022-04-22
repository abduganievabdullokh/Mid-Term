#include "University.h"
#include "Person.h"
#include "Student.h"
#include "CP_Professor.h"
#include "Speaking_Professor.h"
#include "Professor.h"
#include "Employee.h"
#include <Windows.h>
void Welcome(){
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "\n\n";
    SetConsoleTextAttribute(a, 9);
    string EnterId;  
    cout << "Welcome to ";
}
int main(){
    Welcome();
   // Person peron1("Akfa",  "Abdullokh", "Abduganiev", 20 );
    Student student1("Akfa",  "Abdullokh", "Abduganiev", 20, "21SE020", "IT software engineering", 27'000'000 );
    student1.display();

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "\n\n";
    SetConsoleTextAttribute(h, 6);

    Professor *cp_prof = new CP_Professor("Akfa",  "MukhammadAli", "Khayatov", 25, 9000, "Programming");
    cp_prof->display();
    //cp_prof->SubjectSkills();
    HANDLE g = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "\n\n";
    SetConsoleTextAttribute(g, 4);

    Professor *speak_prof = new Speaking_Professor("Akfa", "Azamat", "Akhrorov", 33, 10000, "Speaking");
    speak_prof->display();
    speak_prof->SubjectSkills();

  /*  CP_Professor comp_prof("Akfa", "Sardor", "Gulyamov", 23, 20000, "Programming");
    comp_prof.display();*/


    return 0;
}