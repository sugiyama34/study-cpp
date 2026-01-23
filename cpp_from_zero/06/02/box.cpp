#include <iostream>
using namespace std;

template <typename T>
class Box {
    private:
        T value;
    
    public:
        Box(T v) : value(v) {}

        void show() {
            cout << value << " in the Box" << endl;
        }
};

int main() {
    Box<int> boxA(42);
    Box<double> boxB(3.14);
    Box<string> boxC("Hello, World!");

    boxA.show();
    boxB.show();
    boxC.show();

    return 0;
}
