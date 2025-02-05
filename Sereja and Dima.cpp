#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cards[1000];
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int sereja_points = 0, dima_points = 0;
    int left = 0, right = n - 1;
    bool turn_sereja = true;  // Sereja starts first

    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (turn_sereja) {
                sereja_points += cards[left];
            } else {
                dima_points += cards[left];
            }
            left++;
        } else {
            if (turn_sereja) {
                sereja_points += cards[right];
            } else {
                dima_points += cards[right];
            }
            right--;
        }

        turn_sereja = !turn_sereja;  // Switch turn
    }

    cout << sereja_points << " " << dima_points << endl;

    return 0;
}
