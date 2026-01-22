#include <iostream>
#include <string>
using namespace std;

class StudentCard {
    public:
        static int counter;
        int id;
        string name;

    StudentCard(int i, string s) : id(i), name(s) {
        cout << "Constructor called" << endl;
        StudentCard::counter++;
    }
};

int StudentCard::counter = 0;

int main() {
    cout << "counter: " << StudentCard::counter << endl;
    StudentCard a(1234, "Alice");
    cout << "counter: " << StudentCard::counter << endl;
    StudentCard b(5678, "Bob");
    cout << "counter: " << StudentCard::counter << endl;
    return 0;
}
