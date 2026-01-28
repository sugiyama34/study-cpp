#include <iostream>
using namespace std;

int main() {
    int scores[] = {10, 20, 30};
    int* p = scores;

    cout << "Value of *p: " << *p << endl;
    cout << "Valud of p[0]: " << p[0] << endl;
    cout << "Valud of p[1]: " << p[1] << endl;
    cout << "Valud of p[2]: " << p[2] << endl;
    cout << "Valud of p[3]: " << p[3] << endl;
    cout << "Valud of p[4]: " << p[4] << endl;
    cout << "Valud of p[5]: " << p[5] << endl;
    cout << "Valud of p[6]: " << p[6] << endl;

    return 0;
}
