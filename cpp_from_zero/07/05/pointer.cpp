#include <iostream>
using namespace std;

void func(int* p) {
    *p = 10;
    cout << "Value of *p: " << *p << endl;
}

int main() {
    int i = 5;
    cout << "Value of i before func: " << i << endl;
    func(&i);
    cout << "Value of i after func: " << i << endl;
    return 0;
}
