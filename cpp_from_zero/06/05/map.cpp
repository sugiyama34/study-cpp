#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> scores;
    scores["Alice"] = 90;
    scores["Bob"] = 85;

    cout << "Alice's score: " << scores["Alice"] << endl;
    cout << "Bob's score: " << scores["Bob"] << endl;
    return 0;
}
