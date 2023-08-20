#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<pair<int, int>> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data[i].first >> data[i].second;
    }

    // Сортировка данных по waste, затем по earn
    sort(data.begin(), data.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    int days = 0;
    for (const auto& [earn, waste] : data) {
        if (s <= 0) {
            s += earn;
        } else {
            s -= waste;
            days++;
        }
    }

    cout << days;
    return 0;
}
