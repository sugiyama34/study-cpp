#include <iostream>
using namespace std;

void countdown(int start) {
    cout << "Argument: " << start << endl;
    cout << "Countdown!" << endl;
    for (int i = start; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    countdown(3);
    countdown(10);
    return 0;
}
