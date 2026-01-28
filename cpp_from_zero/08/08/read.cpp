#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // 1. Open a file
    ifstream ifs("../../data/sample.txt");
    if (!ifs) {
        cerr << "Failed to open file." << endl;
        return 1;
    }

    // 2. Read line and process
    string line;
    int line_count = 0;
    while (getline(ifs, line)) {
        cout << ++line_count << ": " << line << endl;
    }

    // 3. Close the file
    ifs.close();

    return 0;
}
