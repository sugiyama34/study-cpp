#include <iostream>
using namespace std;

int main() {
    int age = 20;
    if (age < 13 || age >= 65) {
        cout << "Free to enter." << endl;
    } else {
        cout << "You need to pay the enterance fee." << endl;
    }
    return 0;
}
