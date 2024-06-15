#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/**
 * @brief Represents a student in a university.
 */
class Student
{
public:
    /**
     * @brief Constructor for Student class.
     * @param id The unique identifier of the student.
     * @param name The name of the student.
     * @param age The age of the student.
     * @param major The major of the student.
     */
    Student(int id, const std::string &name, int age, const std::string &major);

    /**
     * @brief Getter for the student ID.
     * @return The ID of the student.
     */
    int get_id() const;

    /**
     * @brief Getter for the student name.
     * @return The name of the student.
     */
    std::string get_name() const;

    /**
     * @brief Getter for the student age.
     * @return The age of the student.
     */
    int get_age() const;

    /**
     * @brief Getter for the student major.
     * @return The major of the student.
     */
    std::string get_major() const;

private:
    // Unique identifier of the student.
    int id_;
    // Name of the student.
    std::string name_;
    // Age of the student.
    int age_;
    // Major of the student.
    std::string major_;
};

#endif
