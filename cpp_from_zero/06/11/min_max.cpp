#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {21, 1, 3, 3, 20, 73, 5};
    vector<int>::iterator min_it = min_element(v.begin(), v.end());
    vector<int>::iterator max_it = max_element(v.begin(), v.end());

    cout << "Minimum: " << *min_it << endl;
    cout << "Maximum: " << *max_it << endl;
    return 0;
}
