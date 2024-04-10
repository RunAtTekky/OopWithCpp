#include <bitset>
#include <iostream>
using namespace std;


int set(int num, int pos) {
  return num |= (1<<pos);
}
int unset(int num, int pos) {
  return num &= (~(1<<pos));
}
int toggle(int num, int pos) {
  return num ^= (1<<pos);
}


int main() {
  int number = 20;
  int pos = 10;
  cin >> number >> pos;

  bitset<8> og(number);
  cout << og << "\n";

  bitset<8> s(set(number,pos));
  bitset<8> u(unset(number,pos));
  bitset<8> t(toggle(number,pos));

  cout << s << "\n";
  cout << u << "\n";
  cout << t << "\n";
}
