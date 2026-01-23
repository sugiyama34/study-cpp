#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {5, 3, 8, 1, 4};
    sort(vec.begin(), vec.end());

    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
