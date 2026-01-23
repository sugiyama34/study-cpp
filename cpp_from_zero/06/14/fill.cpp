#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {21, 1, 3, 3, 20, 73, 5};
    fill(++v.begin(), --v.end(), 99);

    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
