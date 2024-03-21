#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string reg;

public:
    // Constructor to initialize name and registration number
    Student(string name, string reg) {
      this->name = name;
      this->reg = reg;
  
      std::cout << "Constructor called." << std::endl;
    }

    // Destructor to clean up resources
    ~Student() {
        std::cout << "Destructor called." << std::endl;
    }

    // Function to print name and registration number
    void printDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Registration Number: " << reg << std::endl;
    }
};

int main() {
    // Creating an object of Student class
    Student varun("Varun Rawat", "22BCE10512");

    // Printing details
    varun.printDetails();

    return 0;
}

