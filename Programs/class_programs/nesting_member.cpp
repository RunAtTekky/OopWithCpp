#include <iostream>
using namespace std;

class OuterClass {
private:
    int outerData;

    // Inner class declaration
    class InnerClass {
    private:
        int innerData;

    public:
        InnerClass(int data) : innerData(data) {}

        void displayInnerData() {
            cout << "Inner data: " << innerData << "\n";
        }
    };

public:
    OuterClass(int data) : outerData(data) {}

    void useInnerClass() {
        InnerClass inner(42); // Create an instance of InnerClass
        inner.displayInnerData();
    }
};

int main() {
    OuterClass outer(10); // Create an instance of OuterClass
    outer.useInnerClass();

    return 0;
}

