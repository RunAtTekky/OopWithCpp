#include <iostream>
using namespace std;

class OuterClass {
public:
    OuterClass() {
        cout << "OuterClass constructor" << "\n";
    }

    // Inner class declaration
    class InnerClass {
    public:
        InnerClass() {
            cout << "InnerClass constructor" << "\n";
        }

        void innerMethod() {
            cout << "InnerClass method" << "\n";
        }
    };

    // Method to use InnerClass
    void useInnerClass() {
        InnerClass inner;
        inner.innerMethod();
    }
};

int main() {
    OuterClass outer;
    outer.useInnerClass();

    return 0;
}

