#include <iostream>
using namespace std;

template <typename T>
T get_max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int i = get_max<int>(10, 4);
    double d = get_max<double>(1.2, 5.2);
    cout << i << ", " << d << endl;
    return 0;
}
