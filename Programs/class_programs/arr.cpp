#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string registrationNumber;

public:
    // Constructor to initialize name and registration number
    Student(const std::string& name, const std::string& regNumber) : name(name), registrationNumber(regNumber) {}

    // Function to print name and registration number
    void printDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Registration Number: " << registrationNumber << std::endl;
    }
};

int main() {
    const int numStudents = 3; // Number of students
    Student students[numStudents] = {
        Student("Student 1", "123"),
        Student("Student 2", "456"),
        Student("Student 3", "789")
    };

    // Printing details of each student
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Details of Student " << i+1 << ":" << std::endl;
        students[i].printDetails();
        std::cout << std::endl;
    }

    return 0;
}

