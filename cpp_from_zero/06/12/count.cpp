#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<string> v = {"ab", "bc", "cd", "bc", "ac", "ba"};
    cout << "#\"bc\": " << count(v.begin(), v.end(), "bc") << endl;
    return 0;
}