#include <iostream>
#include "Course.h"

Course::Course(int id, const std::string &name, const std::string &faculty, const std::string &professor_name, int capacity)
    : id_(id), name_(name), faculty_(faculty), professor_name_(professor_name), capacity_(capacity) {}

int Course::get_id() const
{
    return id_;
}

std::string Course::get_name() const
{
    return name_;
}

std::string Course::get_faculty() const
{
    return faculty_;
}

std::string Course::get_professor_name() const
{
    return professor_name_;
}

int Course::get_capacity() const
{
    return capacity_;
}

bool Course::add_student(int student_id)
{
    // Verify that there is room for the new student
    if (get_num_students() < capacity_)
    {
        student_ids_.push_back(student_id);
        return true;
    }
    else
    {
        // Construct the warning message with the student ID
        std::cerr << "Warning: The student with ID " << student_id << " was not enrolled in the class." << std::endl;
        return false;
    }
}

int Course::get_num_students() const
{
    return student_ids_.size();
}

std::vector<int> Course::get_students() const
{
    return student_ids_;
}
