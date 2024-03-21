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
    // Creating an object of Student class using dynamic memory allocation
    Student *varun = new Student("Varun Rawat", "22BCE10512");

    // Printing details using pointer
    varun->printDetails();

    // Don't forget to deallocate memory
    delete varun;

    return 0;
}

