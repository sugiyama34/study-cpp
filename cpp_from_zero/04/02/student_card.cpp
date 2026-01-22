#include <iostream>
#include <string>
using namespace std;

class StudentCard {
    public:
        int id = 0;
        string name = "Unnamed";
};

int main() {
    StudentCard a;
    a.id = 1234;
    a.name = "Alice";

    StudentCard b = a;
    StudentCard& c = a;

    a.id = 1001;
    a.name = "Bob";

    cout << "Value of a.id: " << a.id << endl;
    cout << "Value of a.name: " << a.name << endl;
    cout << "Value of b.id: " << b.id << endl;
    cout << "Value of b.name: " << b.name << endl;
    cout << "Value of c.id: " << c.id << endl;
    cout << "Value of c.name: " << c.name << endl;
    return 0;
}
