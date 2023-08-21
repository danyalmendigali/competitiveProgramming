#include <iostream>
#include <vector>
using namespace std;


void solve() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    vector<int> stairs;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (numbers[i + 1] <= numbers[i]) {
            stairs.push_back(numbers[i]);
        }
    }
    stairs.push_back(numbers[n - 1]);

    cout << stairs.size() << "\n";
    for (int step : stairs) {
        cout << step << " ";
    }
}


int main() {
    cin.tie(0);

    solve();






    return 0;
}

