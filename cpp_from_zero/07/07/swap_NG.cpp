#include <iostream>
using namespace std;

void swap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 2;
    int b = 3;
    cout << "a: " << a << ", b: " << b << endl;

    swap(a, b);
    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}
