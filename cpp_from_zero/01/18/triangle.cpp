#include <iostream>
using namespace std;

int main(){
    double base;
    double height;

    cout << "Calculate the area of a triangle." << endl;
    cout << "Enter the base: " << flush;
    cin >> base;
    cout << "Enter the height: " << flush;
    cin >> height;
    cout << "The area: " << base * height / 2 << endl;
    return 0;
}
