#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;

    public:
        Point() : x(0), y(0) {}
        Point(int x, int y) : x(x), y(y) {}

        Point operator+ (const Point& other) const {
            return Point(x + other.x, y + other.y);
        }

        Point operator- (const Point& other) const {
            return Point(x - other.x, y - other.y);
        }

        Point operator* (int scalar) const {
            return Point(x * scalar, y * scalar);
        }

        Point operator* (const Point& other) const {
            return Point(x * other.x - y * other.y, x * other.y + y * other.x);
        }

        bool operator== (const Point& other) const {
            return (x == other.x) && (y == other.y);
        }

        Point operator-() const {
            return Point(-x, -y);
        }

        void printInfo() {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

int main() {
    Point p1(1, 3);
    Point p2(2, 5);

    p1.printInfo();
    p2.printInfo();

    Point p3 = p1 + p2;
    p3.printInfo();

    Point p4 = p1 - p2;
    p4.printInfo();

    bool isEqual = (p1 == p2);
    cout << "p1 and p2 are equal: " << isEqual << endl;

    Point p5 = -p1;
    p5.printInfo();

    Point p6 = p1 * 3;
    p6.printInfo();

    // Point p7 = 3 * p1;
    // p7.printInfo();

    Point p8 = p1 * p2;
    p8.printInfo();

    return 0;
}
