#include <iostream>
using namespace std;

double circle_area(double r) {
    return r * r * 3.14159;
}

int main() {
    double d = circle_area(2.5);
    cout << "Area of circle with radius 2.5: " << d << endl;
    return 0;
}
