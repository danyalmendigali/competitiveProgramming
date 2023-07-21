#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int maxQuality = 0;
        int winner = -1;

        for (int i = 1; i <= n; ++i) {
            int words, quality;
            cin >> words >> quality;

            if (words <= 10 && quality > maxQuality) {
                maxQuality = quality;
                winner = i;
            }
        }

        cout << winner << endl;
    }

    return 0;
}

