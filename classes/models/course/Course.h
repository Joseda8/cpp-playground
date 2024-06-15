#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

/**
 * @brief Represents a course in a university.
 */
class Course
{
public:
    /**
     * @brief Constructor for Course class.
     * @param id The unique identifier of the course.
     * @param name The name of the course.
     * @param faculty The faculty offering the course.
     * @param professor_name The name of the professor teaching the course.
     * @param capacity The maximum capacity of students that can enroll in the course.
     */
    Course(int id, const std::string &name, const std::string &faculty, const std::string &professor_name, int capacity);

    /**
     * @brief Getter for the course ID.
     * @return The ID of the course.
     */
    int get_id() const;

    /**
     * @brief Getter for the course name.
     * @return The name of the course.
     */
    std::string get_name() const;

    /**
     * @brief Getter for the faculty offering the course.
     * @return The faculty offering the course.
     */
    std::string get_faculty() const;

    /**
     * @brief Getter for the professor's name teaching the course.
     * @return The professor's name teaching the course.
     */
    std::string get_professor_name() const;

    /**
     * @brief Getter for the capacity of the course.
     * @return The maximum capacity of students that can enroll in the course.
     */
    int get_capacity() const;

    /**
     * @brief Add a student to the course.
     * @param student_name The name of the student to add.
     * @param student_id The unique identifier of the student.
     */
    void add_student(const std::string &student_name, int student_id);

    /**
     * @brief Get the number of enrolled students.
     * @return The number of students currently enrolled.
     */
    int get_num_students() const;

    /**
     * @brief Get the name of a student enrolled in the course.
     * @param index Index of the student in the array.
     * @return The name of the student at the given index.
     */
    std::string get_student_name(int index) const;

    /**
     * @brief Get the ID of a student enrolled in the course.
     * @param index Index of the student in the array.
     * @return The ID of the student at the given index.
     */
    int get_student_id(int index) const;

private:
    // Unique identifier of the course.
    int id_;
    // Name of the course.
    std::string name_;
    // Faculty offering the course.
    std::string faculty_;
    // Name of the professor teaching the course.
    std::string professor_name_;
    // Maximum capacity of students.
    int capacity_;

    // Array to store students IDs
    std::vector<int> student_ids_;
};

#endif
