#include <iostream>
using namespace std;

int main() {
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  int sum = 0;

  for (auto element : arr) sum += element;

  double average = sum/ (double) 10;

  cout << "The average of numbers is: " << average << "\n";

  return 0;
}
