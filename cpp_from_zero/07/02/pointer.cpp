#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int* p = &i;

    int j = *p;
    cout << "Value of j: " << j << endl;
    *p = 10;
    cout << "Value of i: " << i << endl;
    return 0;
}
