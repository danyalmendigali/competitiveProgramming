#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m), positions;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    // Проверяем, что каждый элемент из b встречается в a ровно один раз
    for (int elem : b) {
        if (count(a.begin(), a.end(), elem) != 1) {
            cout << 0;
            return 0;
        }
    }

    // Находим позиции элементов b в a
    for (int elem : b) {
        auto it = find(a.begin(), a.end(), elem);
        if (it != a.end()) {
            positions.push_back(it - a.begin());
        } else {
            // Элемент из b не найден в a
            cout << 0;
            return 0;
        }
    }

    // Сортируем позиции
    sort(positions.begin(), positions.end());

    long long res = 1;
    for (int i = 1; i < m; ++i) {
        long long diff = positions[i] - positions[i-1];
        res = (res * diff) % MOD;
    }

    cout << res;

    return 0;
}
