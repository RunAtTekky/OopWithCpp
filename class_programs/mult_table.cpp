#include <iostream>
using namespace std;

int main() {
  cout << "Input the number for which you need multiplication table: ";
  int n; cin >> n;

  for (int i=1; i<=10; i++) {
    cout << n << " * " << i << " = " << n*i << "\n";
  }
}
