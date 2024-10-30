#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define ll long long
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, vector<int>> bit_groups;

    // Группируем числа по старшим битам
    for (int i = 0; i < n; i++) {
        int msb = 31 - __builtin_clz(a[i]);  // Находим старший значащий бит числа
        bit_groups[msb].push_back(a[i]);
    }

    int res = 0;

    // Обрабатываем каждую группу
    for (auto &entry : bit_groups) {
        auto &group = entry.second;

        // Считаем пары только внутри группы
        for (int i = 0; i < group.size(); i++) {
            for (int j = i + 1; j < group.size(); j++) {
                if ((group[i] & group[j]) >= (group[i] ^ group[j])) {
                    res++;
                }
            }
        }
    }

    cout << res << endl;
}

int main() {
    Fast_Code;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
