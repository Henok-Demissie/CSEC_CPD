#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cubes[n];

    for (int i = 0; i < n; i++) {
        cin >> cubes[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (cubes[j] > cubes[j + 1]) {
                int temp = cubes[j];
                cubes[j] = cubes[j + 1];
                cubes[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << cubes[i] << " ";
    }

    return 0;
}
