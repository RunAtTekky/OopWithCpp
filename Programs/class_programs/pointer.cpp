#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string reg;

public:
    Student(string name, string reg) {
      this->name = name;
      this->reg = reg;
    }

    void printDetails() {
        cout << "Name: " << name << "\n";
        cout << "Registration Number: " << reg << "\n";
    }
};

int main() {
    string name, reg;
    cout << "Enter name and registration number: \n";
    cin >> name >> reg;
    Student *varun = new Student(name, reg);

    varun->printDetails();

    delete varun;

    return 0;
}

