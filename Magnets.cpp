#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prev_magnet, current_magnet;
    int groups = 1;

    cin >> prev_magnet;
    for (int i = 1; i < n; i++) {
        cin >> current_magnet;
        if (current_magnet != prev_magnet) {
            groups++;
        }
        prev_magnet = current_magnet;
    }

    cout << groups << endl;

    return 0;
}
