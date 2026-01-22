#include <iostream>
using namespace std;

class A {
    public:
        int x = 0;
        void printInfo() {
            cout << "x: " << x << endl;
        }
};

class B : public A {};

int main() {
    B b;
    b.x = 5;
    b.printInfo();
    return 0;
}