#include <iostream>
using namespace std;

void func(int i) {
    i++;
}

int main() {
    int i = 10;
    cout << "(1) i: " << i << endl;
    func(i);
    cout << "(2) i: " << i << endl;
    return 0;
}
