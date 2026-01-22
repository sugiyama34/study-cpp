#include <iostream>
#include <string>
using namespace std;

class StudentCard {
    public:
        int id = 0;
        string name = "Unnamed";

        StudentCard()  : id(0), name("Unnamed") {
            cout << "Default constructor wo argument process" << endl;
        }
        StudentCard(int i) : id(i), name("Unnamed") {
            cout << "Constructor with one argument process" << endl;
        }
        StudentCard(int i, string s) : id(i), name(s) {
            cout << "Constructor process with full arguments" << endl;
        }

        void printInfo() {
            cout << "Student ID: " << id << endl;
            cout << "Student Name: " << name << endl;
        }
};

int main() {
    StudentCard a;
    a.printInfo();

    StudentCard b(1234);
    b.printInfo();

    StudentCard c(5678, "Carol");
    c.printInfo();

    return 0;
}
