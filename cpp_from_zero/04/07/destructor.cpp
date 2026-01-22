#include <iostream>
using namespace std;

class MyClass {
    public:
        int id;

        MyClass(int i) : id(i) {
            cout << "Object with ID " << id << " is created." << endl;
        }

        ~MyClass() {
            cout << "Object with ID " << id << " is destroyed." << endl;
        }
};

int main() {
    MyClass a(1);

    for (int i = 2; i <= 5; i++) {
        cout << "Creating object with ID " << i << " inside the loop." << endl;
        MyClass b(i);
        cout << "Exiting the loop iteration for object with ID " << i << "." << endl;
    }

    cout << "End of main function." << endl;
    return 0;
}
