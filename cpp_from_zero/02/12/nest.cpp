#include <iostream>
using namespace std;

int main() {

    for (int a = 1; a <= 3; a++) {
        cout << "a: " << a << endl;
        for (int b = 1; b <= 3; b++) {
            cout << "    b: " << b << endl;
        }
    }
    return 0;
}