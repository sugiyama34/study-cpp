#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> data = {10, 20, 30, 40, 50};
    list<int>::iterator it = data.begin();
    while (it != data.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    return 0;
}
