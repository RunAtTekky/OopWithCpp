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
    Student students[3] = {
        Student("Varun", "22BCE10512"),
        Student("Divy", "22BCE11433"),
        Student("Sparsh", "22BCE10441")
    };

    for (int i = 0; i < 3; ++i) {
        cout << "Details of Student " << i+1 << ":" << "\n";
        students[i].printDetails();
        cout << "\n";
    }

    return 0;
}

