//
// Created by Dell on 12/6/2023.
//

#include "Student.h"
#include<string>
using namespace std;

Student::Student() {

}
Student::Student(string name, string semester, int id, int year) {
    this->name = name;
    this->semester = semester;
    this->id = id;
    this->year = year;
}

Student::~Student() {

}

string Student::getName() {
    return name;
}
string Student::getSemester() {
    return semester;
}
int Student::getID() {
    return id;
}
int Student::getYear() {
    return year;
}