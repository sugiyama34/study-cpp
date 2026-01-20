#include <iostream>
using namespace std;

void countdown() {
    cout << "Countdown!" << endl;
    for (int i = 5; i>= 0; i--) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    countdown();
    return 0;
}
