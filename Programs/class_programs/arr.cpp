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
        cout << "Name: " << name << std::endl;
        cout << "Registration Number: " << reg << std::endl;
    }
};

int main() {
    const int numStudents = 3; // Number of students
    Student students[numStudents] = {
        Student("Varun", "22BCE10512"),
        Student("Divy", "22BCE11433"),
        Student("Sparsh", "22BCE10441")
    };

    // Printing details of each student
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Details of Student " << i+1 << ":" << std::endl;
        students[i].printDetails();
        std::cout << std::endl;
    }

    return 0;
}

