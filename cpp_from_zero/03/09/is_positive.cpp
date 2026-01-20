#include <iostream>
using namespace std;

bool is_positive_number(double d) {
    return d > 0;
}

int main() {
    double d = -1.5;
    cout << (is_positive_number(d) ? "d is a positive number." : "d is a negative number.") << endl;
    return 0;
}
