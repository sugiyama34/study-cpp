#include <iostream>
using namespace std;

void countdown(int start, int end) {
    cout << "Argument start: " << start << endl;
    cout << "Argument end: " << end << endl;
    cout << "Countdown!" << endl;
    for (int i = start; i >= end; i--) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    countdown(7, 3);
    return 0;
}
