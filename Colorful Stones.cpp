#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int position = 1;  // 1-based index

    for (char instruction : t) {
        if (s[position - 1] == instruction) {
            position++;
        }
    }

    cout << position << endl;
    return 0;
}
