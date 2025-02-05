#include <iostream>
using namespace std;

int main() {
    string username;
    cin >> username;

    int freq[26] = {0};
    int distinct_count = 0;

    for (char c : username) {
        if (freq[c - 'a'] == 0) {
            distinct_count++;
            freq[c - 'a'] = 1;
        }
    }

    cout << (distinct_count % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

    return 0;
}
