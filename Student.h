//
// Created by Dell on 12/6/2023.
//

#ifndef CGPA_CALCULATOR_STUDENT_H
#define CGPA_CALCULATOR_STUDENT_H

#include<string>
using namespace std;

class Student {
protected:
    string name, semester;
    int id, year;
public:
    // Constructors
    Student();
    Student(string name, string semester, int id, int year); // Parameterized Constructor
    ~Student(); // Destructor

    // Getters
    string getName();
    string getSemester();
    int getID();
    int getYear();
};


#endif //CGPA_CALCULATOR_STUDENT_H
