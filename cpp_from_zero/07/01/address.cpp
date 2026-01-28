#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int* p = &i;
    cout << "Address of i: " << &i << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value of i: " << i << endl;
    cout << "Value pointed to by p: " << *p << endl;
    return 0;
}
