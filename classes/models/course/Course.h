#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

/**
 * @brief Course in a university.
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
     * @param student_id The unique identifier of the student.
     * @return True is the student was added successfully. false otherwise.
     */
    bool add_student(int student_id);

    /**
     * @brief Get the number of enrolled students.
     * @return The number of students currently enrolled.
     */
    int get_num_students() const;

    /**
     * @brief Get the IDs of the students enrolled in the course.
     * @return The array of students participating in the course.
     */
    std::vector<int> get_students() const;

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
