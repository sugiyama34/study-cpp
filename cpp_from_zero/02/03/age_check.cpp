#include <iostream>
using namespace std;

int main() {
    int age = 20;
    if (age < 4) {
        cout << "Free to enter." << endl;
    } else if (age < 13) {
        cout << "Child fee applies." << endl;
    } else {
        cout << "Adult fee applies." << endl;
    }
    return 0;
}
