#include <iostream>
using namespace std;

void func() {
    cout << "no argument" << endl;
}

void fun(int i) {
    cout << "integer argument: " << i << endl;
}

void func(double d) {
    cout << "double argument: " << d << endl;
}

void func(string s) {
    cout << "string argument: " << s << endl;
}

int main() {
    func();
    func(1);
    func(0.1);
    func("Hello, World!");
    return 0;
}
