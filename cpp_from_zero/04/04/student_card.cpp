#include <iostream>
#include <string>
using namespace std;

class StudentCard {
    public:
        int id = 0;
        string name = "Unnamed";
    
        
        void printInfo() {
            cout << "Student ID: " << this->id << endl;
            cout << "Student Name: " << this->name << endl;
        }
};

int main() {
    StudentCard a;
    a.id = 1234;
    a.name = "Alice";
    
    StudentCard b;
    b.id = 5678;
    b.name = "Bob";

    a.printInfo();
    b.printInfo();
    return 0;
}
