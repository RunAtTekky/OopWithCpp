#include <iostream>
using namespace std;

int main() {
  int num; cin >> num;

  int fact = 1;
  for (int i=2; i<=num; i++) {
    fact = fact*i;
  }

  cout << "Factorial is " << fact << "\n";
}
