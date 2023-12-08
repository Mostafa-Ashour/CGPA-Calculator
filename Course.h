//
// Created by Dell on 12/6/2023.
//

#ifndef CGPA_CALCULATOR_COURSE_H
#define CGPA_CALCULATOR_COURSE_H

#include<string>
using namespace std;

class Course {
protected:
    string courseName;
    string rate;
    int creditHours;
public:
    Course();
    Course(string courseName, string rate, int creditHours);
    ~Course();

    string getCourseName();
    string getRate();
    int getCreditHours();
};


#endif //CGPA_CALCULATOR_COURSE_H
