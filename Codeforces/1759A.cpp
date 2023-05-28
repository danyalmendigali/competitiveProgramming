#include <bits/stdc++.h>

#define ll long long
#define ar array

using namespace std;

void solve() {
    // Неоптимальное создание строки
    // string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    int t;
    cin >> t;
    while(t--) {
    // Оптимальное создание строки
    int n = 50;
    string str = "Yes";

    string s(n * str.length(), ' ');  // Создаем строку с достаточным размером

    for (int i = 0; i < n; i++) {
        s.replace(i * str.length(), str.length(), str);  // Заменяем каждую подстроку на "yes"
    }



    string substring;
    cin >> substring;

    regex pattern(substring);

    if (regex_search(s, pattern)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
       }
    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();


    return 0;
}
