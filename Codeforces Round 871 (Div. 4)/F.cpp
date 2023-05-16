#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Вводим количество тестовых случаев
    while (t--) {
        int n, m;
        cin >> n >> m; // Вводим количество вершин n и количество ребер m
        int u, v, d[n + 1] = {0}; // Массив d для хранения степеней вершин
        for (int i = 0; i < m; i++) {
            cin >> u >> v; // Вводим ребро (u, v)
            ++d[u], ++d[v]; // Увеличиваем степень вершин u и v
        }
        int cnt = 0; // Счетчик для подсчета вершин со степенью 1
        for (int k : d) {
            if (k == 1) // Если степень вершины равна 1
                ++cnt; // Увеличиваем счетчик
        }
        cout << n - cnt - 1 << " " << cnt / (n - cnt - 1) << "\n"; // Выводим количество вершин в основной компоненте связности и отношение cnt/(n - cnt - 1)
    }

    return 0;
}
