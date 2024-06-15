#include <iostream>
#include "models/student/Student.h"

int main() {
    // Create a Student object
    Student student1(1, "John Doe", 20, "Computer Science");

    // Retrieve and print student information
    std::cout << "Student ID: " << student1.get_id() << std::endl;
    std::cout << "Student Name: " << student1.get_name() << std::endl;
    std::cout << "Student Age: " << student1.get_age() << std::endl;
    std::cout << "Student Major: " << student1.get_major() << std::endl;

    return 0;
}
