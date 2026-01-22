#include <iostream>
#include <string>
using namespace std;

class StudentCard {
    public:
        int id = 0;
        string name = "Unnamed";

        StudentCard(int i, string s) : id(i), name(s) {
            cout << "Constructor process" << endl;
        }

        void printInfo() {
            cout << "Student ID: " << id << endl;
            cout << "Student Name: " << name << endl;
        }
};

int main() {
    StudentCard card(1234, "Alice");
    card.printInfo();
    return 0;
}
