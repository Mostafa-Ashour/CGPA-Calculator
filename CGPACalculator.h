//
// Created by Dell on 12/6/2023.
//

#ifndef CGPA_CALCULATOR_CGPACALCULATOR_H
#define CGPA_CALCULATOR_CGPACALCULATOR_H

#include<bits/stdc++.h>
#include "Course.h"
#include "Student.h"

using namespace std;

class CGPACalculator: public Student, public Course{
    vector<Course>courses;
public:
    CGPACalculator();
    ~CGPACalculator();

    void addCourse(Course &anotherCourse);
    float calulateCourseGPA(Course &anotherCourse);
    float calculateCGPA();
    void displayCourseInfo(Course &course);
    void displayAllCoursesInfo(Student &student);
};


#endif //CGPA_CALCULATOR_CGPACALCULATOR_H
