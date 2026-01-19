#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
        cout << i << " is added" << endl;
        cout << "Current sum: " << sum << endl;
        if (sum >20) {
            cout << "Sum exceeded 20, breaking the loop." << endl;
            break;
        }
    }
    return 0;
}