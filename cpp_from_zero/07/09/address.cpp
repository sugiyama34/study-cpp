#include <iostream>
using namespace std;

int main() {
    int scores[3] = {10, 20, 30};

    cout << "Address of scores[0]: " << &scores[0] << endl; 
    cout << "Address of scores[1]: " << &scores[1] << endl; 
    cout << "Address of scores[2]: " << &scores[2] << endl;

    return 0;
}
