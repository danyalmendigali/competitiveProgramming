
#include <bits/stdc++.h>
using namespace std;

#define ll long long

map<int, bool> vis; // Карта для отслеживания посещенных чисел

// Функция рекурсивного обхода чисел
void solve(int x) {
    if (vis[x]) // Если число уже было посещено, прекращаем выполнение функции
        return;
    vis[x] = 1; // Помечаем число как посещенное
    if (x % 3 == 0) { // Если число делится на 3 без остатка
        solve(x / 3); // Рекурсивный вызов для числа, полученного делением исходного числа на 3
        solve((x / 3) * 2); // Рекурсивный вызов для числа, полученного умножением исходного числа на 2 после деления на 3
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Вводим количество тестовых случаев
    while (t--) {
        int n, m;
        cin >> n >> m; // Вводим два числа n и m
        vis.clear(); // Очищаем карту посещенных чисел
        solve(n); // Запускаем рекурсивную функцию для числа n
        cout << (vis[m] ? "YES\n" : "NO\n"); // Выводим "YES", если число m было посещено, иначе "NO"
    }


    return 0;
}
