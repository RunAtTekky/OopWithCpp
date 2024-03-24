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
  cout << "Enter your name and registration number: " << "\n";
  string name, reg;
  cin >> name >> reg;
  Student *varun = new Student(name,reg);

  varun->printDetails();

  return 0;
}
