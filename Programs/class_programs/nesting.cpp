#include <iostream>

class OuterClass {
public:
    OuterClass() {
        std::cout << "OuterClass constructor" << std::endl;
    }

    // Inner class declaration
    class InnerClass {
    public:
        InnerClass() {
            std::cout << "InnerClass constructor" << std::endl;
        }

        void innerMethod() {
            std::cout << "InnerClass method" << std::endl;
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

