#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;
    
    // Using the comma operator to assign values to multiple variables in a single statement
    a = (b += 5, b + a);
    
    cout << "a = " << a << endl;  // Output: a = 30
    cout << "b = " << b << endl;  // Output: b = 15
    cout << "c = " << c << endl;  // Output: c = 10
    
    return 0;
}

