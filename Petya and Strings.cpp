#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        char c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        char c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];

        if (c1 < c2) {
            cout << "-1" << endl;
            return 0;
        }
        if (c1 > c2) {
            cout << "1" << endl;
            return 0;
        }
    }

    cout << "0" << endl;
    return 0;
}
