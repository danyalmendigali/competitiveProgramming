#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int solve(ll int& a, ll int& b, ll int& c) {
        // Находим максимальное значение из a, b и c и сохраняем в переменной mx
    long mx = (a > b) ? a : b;
    mx = (mx > c) ? mx : c;

    // Проверяем, есть ли ничья (если хотя бы два числа равны максимальному)
    bool tie = (((a == mx) + (b == mx) + (c == mx)) > 1);

    // Вычисляем значение переменной u
    // Если a равно mx, присваиваем значение tie, иначе mx + 1 - a
    long u = (a == mx) ? tie : (mx + 1 - a);

    // Вычисляем значение переменной v
    // Если b равно mx, присваиваем значение tie, иначе mx + 1 - b
    long v = (b == mx) ? tie : (mx + 1 - b);

    // Вычисляем значение переменной w
    // Если c равно mx, присваиваем значение tie, иначе mx + 1 - c
    long w = (c == mx) ? tie : (mx + 1 - c);

    // Выводим значения u, v и w
    cout << u << " " << v << " " << w << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }

    return 0;
}
