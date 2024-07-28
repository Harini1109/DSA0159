#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    std::string course;
    double grade;

public:
    // Constructor
    Student(std::string studentName, int studentRollNumber, std::string studentCourse, double studentGrade)
        : name(studentName), rollNumber(studentRollNumber), course(studentCourse), grade(studentGrade) {
        std::cout << "Student constructor called for " << name << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Student destructor called for " << name << std::endl;
    }

    // Function to display student details
    void displayStudentDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Course: " << course << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }

    // Function to update the student's grade
    void updateGrade(double newGrade) {
        if (newGrade >= 0.0 && newGrade <= 100.0) {
            grade = newGrade;
            std::cout << "New grade for " << name << " is " << grade << std::endl;
        } else {
            std::cout << "Invalid grade!" << std::endl;
        }
    }
};

int main() {
    // Create a Student object
    Student student("Alice Johnson", 101, "Computer Science", 85.5);

    // Display student details
    student.displayStudentDetails();

    // Update the student's grade
    student.updateGrade(90.0);

    // Display student details again
    student.displayStudentDetails();

    // When the program ends, the destructor will be called automatically
    return 0;
}
