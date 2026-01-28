#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers with space delimiter:" << endl;
    cin >> a >> b;

    try {
        if (!cin) {
            throw runtime_error("Invalid input. Please enter numeric values with space delimiter.");
        }

        if (b == 0) {
            throw invalid_argument("Division by zero is not allowed.");
        }

        double result = a / b;
        cout << a << " / " << b << " = " << result << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
        return 1;
    }
    catch (const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() << endl;
        return 1;
    }

    cout << "Program ended." << endl;
    return 0;
}
