#include <iostream>
using namespace std;

class OuterClass {
public:
    OuterClass() {
        cout << "OuterClass constructor" << std::endl;
    }

    // Inner class declaration
    class InnerClass {
    public:
        InnerClass() {
            cout << "InnerClass constructor" << std::endl;
        }

        void innerMethod() {
            cout << "InnerClass method" << std::endl;
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

