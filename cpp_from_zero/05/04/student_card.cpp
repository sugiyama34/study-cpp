#include <iostream>
#include <string>
using namespace std;

class StudentCard {
    public:
        int id = 0;
        string name = "Unnamed";
    
        void printInfo() {
            cout << "Student ID: " << id << endl;
            cout << "Student Name: " << name << endl;
        }
};

class InternationalStudentCard : public StudentCard {
    public:
        string nationality = "Undefined";
};

int main() {
    InternationalStudentCard a;
    a.id = 2345;
    a.name = "John Smith";
    a.nationality = "UK";
    a.printInfo();
    return 0;
}
