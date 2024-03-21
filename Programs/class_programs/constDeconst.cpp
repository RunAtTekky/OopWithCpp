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
  
      cout << "Constructor called." << "\n";
    }

    ~Student() {
        cout << "Destructor called." << "\n";
    }

    void printDetails() {
        cout << "Name: " << name << "\n";
        cout << "Registration Number: " << reg << "\n";
    }
};

int main() {
    Student varun("Varun Rawat", "22BCE10512");

    varun.printDetails();

    return 0;
}

