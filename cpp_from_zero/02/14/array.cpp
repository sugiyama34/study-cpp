#include <iostream>
using namespace std;

int main () {
    int scores[5];
    scores[0] = 50;
    scores[1] = 55;
    scores[2] = 70;
    scores[3] = 65;
    scores[4] = 80;
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    int scores_2[5] = {50, 55, 70, 65, 80};
    for (int i = 0; i < 5; i++) {
        cout << scores_2[i] << " ";
    }
    cout << endl;

    int scores_3[] = {50, 55, 70, 65, 80};
    for (int i = 0; i < 5; i++) {   
        cout << scores_3[i] << " ";
    }
    cout << endl;

    int nested_scores[3][5] = {
        {51, 56, 71, 66, 81, },
        {52, 57, 72, 67, 82, },
        {53, 58, 73, 68, 83, },
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << nested_scores[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
