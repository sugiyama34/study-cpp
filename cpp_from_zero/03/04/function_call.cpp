#include <iostream>
using namespace std;

void func_a() {
    cout << "Starting func_a()" << endl;
    cout << "Finishing func_a()" << endl;
}

void func_b() {
    cout << "Starting func_b()" << endl;
    func_a();
    cout << "Finishing func_b()" << endl;
}

int main() {
    cout << "Starting main()" << endl;
    func_b();
    cout << "Finishing main()" << endl;
    return 0;
}
