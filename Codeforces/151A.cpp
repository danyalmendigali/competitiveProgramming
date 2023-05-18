#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

int solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toastFromSoda = (k * l) / nl; // Количество тостов от газировки
    int toastFromLime = (c * d) / 1; // Количество тостов от лайма
    int toastFromSalt = p / np; // Количество тостов от соли

    // Находим минимальное количество тостов, которое можно сделать
    int minToasts = min({toastFromSoda, toastFromLime, toastFromSalt});

    // Распределяем минимальное количество тостов между друзьями
    int toastsPerFriend = minToasts / n;

    cout << toastsPerFriend << endl;



}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();




   return 0;
}

