#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int x, y;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    int moves = abs(3 - x) + abs(3 - y);
    cout << moves << endl;

    return 0;
}
