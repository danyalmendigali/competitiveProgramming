#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve() {
    int t;
    cin >> t; // Вводим количество тестовых случаев
    while(t--) { // Цикл для каждого тестового случая
        int n;
        cin >> n; // Вводим количество элементов в текущем случае
        ll ans1 = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX; // Инициализация переменных-ответов значением INT_MAX (максимальное значение для int)
        ll a;
        string b;
        for(int i = 0; i < n; i++) {
            cin >> a >> b; // Вводим пару чисел (a) и строку (b)
            if(b == "11")
                ans1 = min(ans1, a); // Если b равно "11", то обновляем ans1, выбирая минимальное значение между текущим ans1 и a

            else if(b == "01")
                ans2 = min(ans2, a); // Если b равно "01", то обновляем ans2, выбирая минимальное значение между текущим ans2 и a

            else if(b == "10")
                ans3 = min(ans3, a); // Если b равно "10", то обновляем ans3, выбирая минимальное значение между текущим ans3 и a
        }
        if(ans1 == INT_MAX && (ans2 == INT_MAX || ans3 == INT_MAX)) {
            cout << -1 << "\n"; // Если ans1 равен INT_MAX и (ans2 равен INT_MAX или ans3 равен INT_MAX), то выводим -1 и переходим к следующему тестовому случаю
            continue;
        }
        if(ans1 < (ans2 + ans3)) {
            cout << ans1; // Если ans1 меньше суммы ans2 и ans3, то выводим ans1
        }
        else {
            cout << ans2 + ans3; // Иначе выводим сумму ans2 и ans3
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
