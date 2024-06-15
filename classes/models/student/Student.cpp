#include "Student.h"

// Constructor implementation
Student::Student(int id, const std::string &name, int age, const std::string &major)
    : id_(id), name_(name), age_(age), major_(major)
{
    // Constructor initializer list assigns values to member variables
}

// Getter for student ID
int Student::get_id() const
{
    return id_;
}

// Getter for student name
std::string Student::get_name() const
{
    return name_;
}

// Getter for student age
int Student::get_age() const
{
    return age_;
}

// Getter for student major
std::string Student::get_major() const
{
    return major_;
}
