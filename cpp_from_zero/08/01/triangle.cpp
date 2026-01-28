#include <iostream>
using namespace std;

double triangle_area(double base, double height);

int main() {
    double area = triangle_area(3.0, 5.0);
    cout << "Area: " << area << endl;

    return 0;
}

double triangle_area(double base, double height) {
    return base * height / 2.0;
}
