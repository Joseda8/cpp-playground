#include <iostream>
#include "models/course/Course.h"
#include "models/student/Student.h"

int main()
{
    // Create Student objects
    Student student1(1, "John Lennon", 20, "Computer Science");
    Student student2(2, "Paul McCartney", 22, "Music");
    Student student3(3, "George Harrison", 21, "Art");
    Student student4(4, "Ringo Starr", 23, "History");

    // Create a class
    Course class_cr_history(8800, "History of Costa Rica 1", "History", "Slotherson", 3);

    // Enroll students
    class_cr_history.add_student(1);
    class_cr_history.add_student(2);
    class_cr_history.add_student(3);
    class_cr_history.add_student(4);

    return 0;
}
