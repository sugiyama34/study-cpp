#include <iostream>
using namespace std;

// Prototype declaration
void func1(int a);
void func2();

// Main code block
int main(){
    func1(10);
    func2();
    return 0;
}

void func1(int a) {
    cout << "func1 is called." << endl;
}

void func2() {
    cout << "func2 is called." << endl;
}
