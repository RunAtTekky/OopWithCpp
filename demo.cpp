#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  int age;
  string name;
public:
  Student(int age, string name) {
    this->age = age;
    this->name = name;
  }
  void printStudent() {
    cout << "\nStudent's name: " << this->name << "\nStudent's age: " << this->age;
  }
  void incrementAge() {
    this->age++;
  }
};

int main() {
  Student student1 = Student(20, "Lallantaap");
  student1.incrementAge();
  student1.printStudent();
  student1.incrementAge();
  student1.printStudent();
}

