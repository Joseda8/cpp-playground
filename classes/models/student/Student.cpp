#include "Student.h"

Student::Student(int id, const std::string &name, int age, const std::string &major)
    : id_(id), name_(name), age_(age), major_(major) {}

int Student::get_id() const
{
    return id_;
}

std::string Student::get_name() const
{
    return name_;
}

int Student::get_age() const
{
    return age_;
}

std::string Student::get_major() const
{
    return major_;
}
