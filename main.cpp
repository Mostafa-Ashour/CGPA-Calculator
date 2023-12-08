#include "CGPACalculator.h"
#include "Student.h"
#include "Course.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Student information input
    string name, semester;
    int id, year;

    cout << "Enter Your Name: " << endl;
    getline(cin,name);
    cout << "Enter Your ID: " << endl;
    cin >> id;
    cout << "Enter Your Year: " << endl;
    cin >> year;
    cout << "Enter Your Semester: " << endl;
    cin >> semester;

    Student student(name, semester, id, year);

    // Number of courses input
    int numOfCourses;
    cout << "Enter Number of Courses You Have This Term: " << endl;
    cin >> numOfCourses;

    // Creating a CGPACalculator and vector to store courses
    CGPACalculator calculator;
    vector<Course> courses;

    // Input for each course
    for (int i = 0; i < numOfCourses; ++i) {
        string courseName, rate;
        int creditHours;

        cout << "Enter Course Name: " << endl;
        cin >> courseName;
        cout << "Enter Your Rate: " << endl;
        cin >> rate;
        cout << "Enter Credit Hours For This Course: " << endl;
        cin >> creditHours;

        Course course(courseName, rate, creditHours);
        courses.push_back(course);
        calculator.addCourse(course);
    }

    // Display options to the user
    while (true) {
        cout << "Select Number of Your Course to Know Your GPA or 0 to Exit: " << endl;
        for (int i = 0; i < numOfCourses; ++i) {
            cout << "Number: " << (i + 1) << ", For Course: " << courses[i].getCourseName() << endl;
        }
        cout << "Number: " << numOfCourses + 1 << ", If You Want to Display All Courses GPAs and Your Final GPA." << endl;
        cout << "Number: " << numOfCourses + 2 << ", If You Want to Know Your Total GPA." << endl;
        cout << "Number: 0, Exit" << endl;

        int option;
        cout << "Enter Your Option: " << endl;
        cin >> option;

        // Validate the user's option
        while (option <= 0 || option > numOfCourses + 2) {
            cout << "Invalid Option, Try Again: " << endl;
            cin >> option;
        }

        if (option == 0) {
            cout << "Program Ended." << endl;
            break;  // Exit the loop
        } else if (option >= 1 && option <= numOfCourses) {
            calculator.displayCourseInfo(courses[option - 1]);
        } else if (option == numOfCourses + 1) {
            calculator.displayAllCoursesInfo(student);
        } else if(option == numOfCourses + 2) {
            cout << "Your Final GPA : " << fixed << setprecision(4) <<  calculator.calculateCGPA() << endl;
        }
    }

    return 0;
}
