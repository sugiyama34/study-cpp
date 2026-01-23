#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 2, 8};
    s.insert(2);
    s.insert(5);

    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
