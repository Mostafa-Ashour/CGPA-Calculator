//
// Created by Dell on 12/6/2023.
//

#include "CGPACalculator.h"
#include<iomanip>
#include<map>

#define each auto&
#define endl '\n'

map<string,float>rateForEachCourse = {{"A+", 4}, {"A",3.7}, {"B+",3.3}, {"B",3},
                                      {"C+",2.7}, {"C",2.4}, {"D+",2.2}, {"D",2}, {"F",0}};

CGPACalculator::CGPACalculator() {

}
CGPACalculator::~CGPACalculator() {

}
void CGPACalculator::addCourse(Course &anotherCourse) {
    courses.push_back(anotherCourse);
}

float CGPACalculator::calulateCourseGPA(Course &anotherCourse){
    string tempRate = anotherCourse.getRate();
    int tempCreditHours = anotherCourse.getCreditHours();
    float temp = rateForEachCourse[tempRate];
    return (float)(temp * tempCreditHours);
}

float CGPACalculator::calculateCGPA() {
    float totalPoints = 0.0f, totalHours = 0.0f;

    for(each course : courses) {
        totalHours += course.getCreditHours();
        totalPoints += (rateForEachCourse[course.getRate()]) * (course.getCreditHours());
    }

    if(totalHours == 0)
        return 0.0f;

    return (float)totalPoints / totalHours;
}

void CGPACalculator::displayCourseInfo(Course &course) {
    cout << "Course Name : " << course.getCourseName() << endl;
    cout << "Your Rate : " << course.getRate() << endl;
    cout << "Your GPA in This Course : " << rateForEachCourse[course.getRate()] <<  endl;

}

void CGPACalculator::displayAllCoursesInfo(Student &student) {
    cout << "Student Name : " << student.getName() << endl;
    cout << "Student ID : " << student.getID() << endl;
    cout << "Year : " << student.getYear() << ", Semester: " << student.getSemester() << endl << endl;

    cout << "Display All Courses Info : " << endl;
    for(each course : courses) {
        displayCourseInfo(course);
        cout << endl;
    }

    cout << "Your Final GPA : " << fixed << setprecision(4) << calculateCGPA() << endl;
}