#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<char> v = {'H', 'E', 'L', 'L', 'O', '!'};
    reverse(v.begin(), v.end());
    for (char c : v) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
