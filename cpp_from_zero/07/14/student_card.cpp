#include <iostream>
#include <string>
using namespace std;

class StudentCard {
    public:
        int id;
        string name;
        StudentCard(int i, string s) : id(i), name(s) { }
};

int main() {
    StudentCard a(1234, "Alice");

    cout << "Address of a: " << &a << endl;
    cout << "Size of a: " << sizeof(a) << " bytes" << endl;

    StudentCard *b = new StudentCard(5678, "Bob");

    cout << "Address of b: " << b << endl;
    cout << "id of b: " << b->id << endl;
    cout << "name of b: " << (*b).name << endl;

    delete b;

    return 0;
}
