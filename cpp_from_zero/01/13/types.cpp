#include <iostream>
using namespace std;

int main(){
    int i = 1.99;  // emit warning for implicit conversion
    double d = 1.99;

    cout << "i: " << i << endl;
    cout << "d: " << d << endl;

    return 0;
}