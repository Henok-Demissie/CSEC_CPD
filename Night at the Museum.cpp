#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int total_rotations = 0;
    char current_pos = 'a';  // Initially pointing at 'a'

    for (char target : s) {
        int clockwise = abs(target - current_pos);
        int counterclockwise = 26 - clockwise;

        total_rotations += min(clockwise, counterclockwise);
        current_pos = target;  // Move the pointer to the current character
    }

    cout << total_rotations << endl;
    return 0;
}
