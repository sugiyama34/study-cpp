#include <iostream>
using namespace std;

class AreaCalculator {
    public:
        static double getTriangleArea(double base, double height) {
            return base * height / 2.0;
        }
        static double getCircleArea(double radius) {
            return radius * radius * 3.14159;
        }
};

int main() {
    cout << "Area of triangle with base = 10, height = 5 is: " << AreaCalculator::getTriangleArea(10, 5) << endl;
    cout << "Area of circle with radius = 5 is: " << AreaCalculator::getCircleArea(5) << endl;
    return 0;
}
