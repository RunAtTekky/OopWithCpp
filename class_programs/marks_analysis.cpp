#include <iostream>
#include <numeric>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Enter number of subjects: ";
  cin >> n;

  vector<int> marks;

  for (int i=1; i<=n; i++) {
    cout << "Enter marks obtained in subject " << i << " : ";
    int mark; cin >> mark;

    marks.push_back(mark);
  }

  // Results
  for (auto mark : marks) {
    bool pass = (mark>40);
    if (pass) {
      cout << "PASS\n";
    } else {
      cout << "FAIL\n";
    }
  }

  // Total
  int total_marks = accumulate(marks.begin(), marks.end(),0);
  cout << "Total marks are: " << total_marks << "\n";

  // Average
  double average = total_marks/(double)n;
  cout << "Average is: " << average << "\n";

  // Percentage
  cout << "Percentage: " << (total_marks/(double)(n*100))*100 << "\n";
}
