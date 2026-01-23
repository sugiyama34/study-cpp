#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);
    cout << "size: " << v.size() << endl;
    cout << "first element: " << v.front() << endl;
    cout << "lats element: " << v.back() << endl;
    v.pop_back();
    v[1] = 10;
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
