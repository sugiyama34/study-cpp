#include <iostream>
using namespace std;

int a = 10;

void func() {
    cout << a << endl;
    int a = 0;
    a++;
    cout << a << endl;
}

int main() {
    func();
    cout << a << endl;

    return 0;
}
