#include <iostream>
using namespace std;

int main() {
  cout << "Enter week in number: \n";
  int week; cin >> week;
  cout << "Enter month in number: \n";
  int month; cin >> month;

  switch (week) {
    case 1: cout << "Monday\n"; break;
    case 2: cout << "Tuesday\n"; break;
    case 3: cout << "Wednesday\n"; break;
    case 4: cout << "Thursday\n"; break;
    case 5: cout << "Friday\n"; break;
    case 6: cout << "Saturday\n"; break;
    case 7: cout << "Sunday\n"; break;
    default: cout << "NOPE\n";
  }

  switch (month) {
    case 1: cout << "Jan\n"; break;
    case 2: cout << "Feb\n"; break;
    case 3: cout << "Mar\n"; break;
    case 4: cout << "Apr\n"; break;
    case 5: cout << "May\n"; break;
    case 6: cout << "Jun\n"; break;
    case 7: cout << "Jul\n"; break;
    case 8: cout << "Aug\n"; break;
    case 9: cout << "Sep\n"; break;
    case 10: cout << "Oct\n"; break;
    case 11: cout << "Nov\n"; break;
    case 12: cout << "Dec\n"; break;
    default: cout << "NOPE\n";
  }
}
