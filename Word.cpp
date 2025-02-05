#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upper_count = 0, lower_count = 0;

    for (char c : s) {
        if (isupper(c))
            upper_count++;
        else
        lower_count++;
    }

    if (upper_count > lower_count) {
        for (char &c : s) c = toupper(c);
    } else {
        for (char &c : s) c = tolower(c);
    }

    cout << s << endl;
    return 0;
}
