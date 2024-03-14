#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string str = to_string(n);

  int i=0, j=str.size()-1;

  while (i<j) {
    if (str[i] != str[j]) {
      cout << "Not palindrome\n";
      return 0;
    }
    i++;
    j--;
  }
  cout << "Palindrome\n";
}
