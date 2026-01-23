#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<char> data = {'A', 'D', 'Z', 'P'};
    vector<char>::iterator it = find(data.begin(), data.end(), 'D');

    if (it != data.end()) {
        cout << "Found!" << endl;
    } else {
        cout << "Not Found!" << endl;
    }
    return 0;
}
