#include <iostream>
using namespace std;

class OuterClass {
private:
    int outerData;

    class InnerClass {
    private:
        int innerData;

    public:
        InnerClass(int data) {
          innerData = data;
        }

        void displayInnerData() {
            cout << "Inner data: " << innerData << "\n";
        }
    };

public:
    OuterClass(int data) {
      outerData = data;
    }

    void useInnerClass() {
        InnerClass inner(42);
        inner.displayInnerData();
    }
};

int main() {
    OuterClass outer(10); 
    outer.useInnerClass();

    return 0;
}

