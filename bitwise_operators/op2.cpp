#include <bitset>
#include <iostream>
using namespace std;

int main() {
  int number = 10;
  int pos = 3;
  bitset<8> num(number);

  cout << num << "\n";

  // Check nth bit set or not.
  cout << ((number&(1<<pos)) != 0) << "\n";

  // Remove the lowest set bit
  bitset<8> r_l(number&(number-1));
  cout << r_l << "\n";

  // Get the lowest set bit 
  bitset<8> g_l_s(number&(-number));
  cout << g_l_s << "\n";

}
