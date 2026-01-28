#include <iostream>
using namespace std;

int main() {
    int scores[] = {10, 20, 30};
    int *p = scores;

    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;

    p++;
    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;

    p++;
    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;

    p++;
    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;

    p++;
    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;
    
    return 0;
}
