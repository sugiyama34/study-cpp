#include <iostream>
using namespace std;

int main() {
    int scores[] = {10, 20, 30};
    int *p = scores;

    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;
    cout << "Value of (p+1): " << p+1 << endl;
    cout << "Value of *(p+1): " << *(p+1) << endl;
    cout << "Value of (p+2): " << p+2 << endl;
    cout << "Value of *(p+2): " << *(p+2) << endl;
    cout << "Value of (p+3): " << p+3 << endl;
    cout << "Value of *(p+3): " << *(p+3) << endl;
    cout << "Value of (p+4): " << p+4 << endl;
    cout << "Value of *(p+4): " << *(p+4) << endl;

    return 0;
}
