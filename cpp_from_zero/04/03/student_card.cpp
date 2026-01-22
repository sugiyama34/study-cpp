#include <iostream>
#include <string>
using namespace std;

class StudentCard {
    public:
        int id = 0;
        string name = "Unnamed";
};

void print_info(StudentCard& card) {
    cout << "Student ID: " << card.id << endl;
    cout << "Student Name: " << card.name << endl;
}

void clear_info(StudentCard& card) {
    card.id = 0;
    card.name = "Unnamed";
}

int main() {
    StudentCard a;
    a.id = 1234;
    a.name = "Alice";

    print_info(a);
    clear_info(a);
    print_info(a);
    return 0;
}
