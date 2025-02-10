#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int x = 1;
    while (true) {
        int total_cost = x * k;
        if (total_cost % 10 == 0 || total_cost % 10 == r) {
            cout << x << endl;
            break;
        }
        x++;
    }

    return 0;
}
