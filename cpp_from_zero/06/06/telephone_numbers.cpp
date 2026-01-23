#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> phone_numbers;
    phone_numbers["Alice"] = "123-456-7890";
    phone_numbers["Bob"] = "987-654-3210";

    while (true) {
        cout << "Enter the key to search telephone number: (Q to quit)" << endl;
        string key;
        cin >> key;

        if (key == "Q" || key == "q") {
            cout << "Quitting the program." << endl;
            return 0;
        }

        if (phone_numbers.find(key) != phone_numbers.end()) {
            cout << phone_numbers[key] << endl;
        } else {
            cout << "No telephone number found for " << key << endl;
        }
    }
}
