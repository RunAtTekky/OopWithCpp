#include <iostream>
using namespace std;

#define p(a) cout << a << "\n"

int main() {
  int roll_number = 10512;
  int *roll_number_ref = &roll_number;

  // This prints the address
  p("This is the address the pointer stores");
  p(&roll_number);
  p(roll_number_ref);
  // This prints the number
  p(roll_number);

  *roll_number_ref = 10000;

  p(roll_number_ref);
  p(roll_number);
}
