#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int antonCount = 0, danikCount = 0;

    for (char c : s) {
        if (c == 'A') antonCount++;
        else if (c == 'D') danikCount++;
    }

    if (antonCount > danikCount) {
        cout << "Anton" << endl;
    } else if (danikCount > antonCount) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
