#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int colors[4] = {s1, s2, s3, s4};
    int distinct = 0;

    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (colors[i] == colors[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            distinct++;
        }
    }

    cout << 4 - distinct << endl;
    return 0;
}
