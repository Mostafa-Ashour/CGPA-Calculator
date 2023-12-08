//
// Created by Dell on 12/6/2023.
//

#include "Course.h"

Course::Course() {

}
Course::Course(std::string courseName, string rate, int creditHours) {
    this->courseName = courseName;
    this->rate = rate;
    this->creditHours = creditHours;
}

Course::~Course() {

};

string Course::getCourseName() {
    return courseName;
}
string Course::getRate() {
    return rate;
}
int Course::getCreditHours() {
    return creditHours;
}