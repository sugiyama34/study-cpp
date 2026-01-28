#include <iostream>
using namespace std;

void func(array<int, 3> p) {
    cout << p[0] << endl;
    cout << p.size() << endl;
}

int main() {
    array<int, 3> scores = {10, 20, 30};
    func(scores);
    return 0;
}
