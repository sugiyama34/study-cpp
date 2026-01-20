#include <iostream>
using namespace std;

void func() {
    cout << "sentence inside func()" << endl;
}

int main() {
    cout << "A function func() will be called." << endl;
    func();
    cout << "func() has beeen called" << endl;
    return 0;
}
