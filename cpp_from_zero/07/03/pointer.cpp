#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int j = 8;

    int* p = &i;
    cout << "Value pointed to by p: " << *p << endl;

    p = &j;
    cout << "Value pointed to by p: " << *p << endl;
    
    return 0;
}
