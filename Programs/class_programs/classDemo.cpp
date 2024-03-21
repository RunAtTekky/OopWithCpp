#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  string reg;

public:
  Student (string name, string reg) {
    this->name = name;
    this->reg = reg;
  }

  void printDetails () {
    cout << "Name: " << this->name << "\n";
    cout << "Registration number: " << this->reg << "\n";
  }
};

int main() {
  Student *varun = new Student("Varun Rawat", "22BCE10512");

  varun->printDetails();

  return 0;
}
