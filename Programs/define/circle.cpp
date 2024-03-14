#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE "\n"

int main() {
  double radius = 5.0;
  double circumference;

  circumference = 2 * PI * radius;

  cout << circumference << NEWLINE;

  return 0;
}
