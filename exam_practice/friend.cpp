#include <iostream>
using namespace std;

class Complex {
  private:
  int a,b;

  public:
  void setNumber(int x, int y) {
    a = x; b = y;
  }

  friend Complex sumComplex(Complex c1, Complex c2);

  void printNumber() {
    cout << a << " + " << b << "i\n";
  }
};

Complex sumComplex(Complex c1, Complex c2) {
  Complex sum;
  sum.setNumber(c1.a + c2.a, c1.b + c2.b);
  return sum;
}

int main() {
  Complex c1,c2,sum;

  c1.setNumber(4, 8);
  c2.setNumber(5, 9);

  c1.printNumber();
  c2.printNumber();

  sum = sumComplex(c1, c2);

  sum.printNumber();
}

