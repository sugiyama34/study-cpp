#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream ofs("../../data/output.txt");
    if (!ofs) {
        cerr << "Failed to open file" << endl;
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        ofs << "[" << i << "]" << endl;
    }

    ofs.close();

    return 0;
}
