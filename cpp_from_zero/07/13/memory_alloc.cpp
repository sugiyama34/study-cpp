#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int *a = new int[size];

    for (int i = 0; i < size; i++) {
        a[i] = i + 1;
    }
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;

    return 0;
}
