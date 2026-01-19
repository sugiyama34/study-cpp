#include <iostream>
using namespace std;

int main() {
    int score = 3;
    switch (score) {
        case 1:
            cout << "Do better!" << endl;
            break;
        case 2:
            cout << "Do little more!" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "You cleared!" << endl;
            break;
        default:
            cout << "Invalid score." << endl;
    }
    cout << "done switch sentence." << endl;
    return 0;
}
