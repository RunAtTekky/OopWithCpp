#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string registrationNumber;

public:
    // Constructor to initialize name and registration number
    Student(const std::string& name, const std::string& regNumber) : name(name), registrationNumber(regNumber) {
        std::cout << "Constructor called." << std::endl;
    }

    // Destructor to clean up resources
    ~Student() {
        std::cout << "Destructor called." << std::endl;
    }

    // Function to print name and registration number
    void printDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Registration Number: " << registrationNumber << std::endl;
    }
};

int main() {
    // Creating an object of Student class
    Student varun("Varun Rawat", "22BCE10512");

    // Printing details
    varun.printDetails();

    return 0;
}

