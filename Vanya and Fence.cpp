#include <iostream>

using namespace std;

int main() {
    int persons, height;
    int personHeight;
    long long sum = 0;

    cin >> persons >> height;

    while (persons--) {
        cin >> personHeight;

        if (personHeight > height) sum += 2;
        else sum++;
    }

    cout << sum << endl;

    return 0;
}
