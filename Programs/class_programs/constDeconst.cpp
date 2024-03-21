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
  
      cout << "Constructor called." << "\n";
    }

    // Destructor to clean up resources
    ~Student() {
        cout << "Destructor called." << "\n";
    }

    // Function to print name and registration number
    void printDetails() {
        cout << "Name: " << name << "\n";
        cout << "Registration Number: " << reg << "\n";
    }
};

int main() {
    // Creating an object of Student class
    Student varun("Varun Rawat", "22BCE10512");

    // Printing details
    varun.printDetails();

    return 0;
}

