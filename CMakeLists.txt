cmake_minimum_required(VERSION 3.26)
project(CGPA_Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(CGPA_Calculator main.cpp
        Course.h Course.cpp
        Student.h Student.cpp
        CGPACalculator.h  CGPACalculator.cpp)
