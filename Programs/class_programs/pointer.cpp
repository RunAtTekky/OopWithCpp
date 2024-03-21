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
    }

    // Function to print name and registration number
    void printDetails() {
        cout << "Name: " << name << "\n";
        cout << "Registration Number: " << reg << "\n";
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

