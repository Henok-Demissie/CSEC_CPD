#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> birds(n);
    for (int i = 0; i < n; ++i) {
        cin >> birds[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;

        x--; // Convert to 0-based index

        int left_birds = y - 1;
        int right_birds = birds[x] - y;

        // Update birds on the current and neighboring wires
        if (x > 0) {
            birds[x - 1] += left_birds;
        }
        if (x < n - 1) {
            birds[x + 1] += right_birds;
        }

        birds[x] = 0; // All birds on the current wire fly away
    }

    // Output the number of birds on each wire
    for (int i = 0; i < n; ++i) {
        cout << birds[i] << endl;
    }

    return 0;
}
