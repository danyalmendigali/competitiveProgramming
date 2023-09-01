#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int minStrength = *min_element(a.begin(), a.end());
        int maxStrength = *max_element(a.begin(), a.end());

        int minMoves = 0;
        if (a[0] == minStrength || a[n - 1] == minStrength) {
            minMoves = min(n - 1, minMoves + 1);
        }

        int maxMoves = 0;
        if (a[0] == maxStrength || a[n - 1] == maxStrength) {
            maxMoves = min(n - 1, maxMoves + 1);
        }

        int moves = min(minMoves + n - maxMoves - 1, minMoves + maxMoves);
        cout << moves << endl;
    }

    return 0;
}
