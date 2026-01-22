#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void display() = 0;
};

class Triangle : public Shape {
    public:
        void display() override {
            cout << "△" << endl;
        }
};

class Rectangle : public Shape {
    public:
        void display() override {
            cout << "□" << endl;
        }
};

class Circle : public Shape {
    public:
        void display() override {
            cout << "○" << endl;
        }
};

void draw(Shape& s) {
    s.display();
}

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    draw(c);
    draw(r);
    draw(t);

    return 0;
}
