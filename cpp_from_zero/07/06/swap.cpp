#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;
    cout << "a: " << a << ", b: " << b << endl;

    int tmp = a;
    a = b;
    b = tmp;
    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}
