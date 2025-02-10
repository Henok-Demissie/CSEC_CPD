#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int Y, W;
    cin >> Y >> W;

    int max_roll = (Y > W) ? Y : W;
    int favorable_outcomes = 6 - max_roll + 1;

    int divisor = gcd(favorable_outcomes, 6);
    cout << favorable_outcomes / divisor << "/" << 6 / divisor << endl;

    return 0;
}
