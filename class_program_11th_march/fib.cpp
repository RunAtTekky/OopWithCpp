#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;

  int prev = 0;
  int curr = 1;

  cout << "0 1 ";

  for (int i=3; i<=n; i++) {
    int temp = curr;
    curr = prev+curr;
    prev = temp;
    cout << curr << " ";
  }
}
