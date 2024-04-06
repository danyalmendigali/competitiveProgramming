#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void solve()
{
    int N;
    cin >> N;
    vector<int> divisors(N);
    for (int i = 0; i < N; ++i) {
        cin >> divisors[i];
    }

    // Поиск максимального делителя
    int max_divisor = *max_element(divisors.begin(), divisors.end());

    // Восстановление числа K
    int K = 1;
    for (int i = 0; i < N; ++i) {
        if (divisors[i] != max_divisor) {
            K *= divisors[i];
        }
    }

    // Вывод результата в выходной файл
    cout << K << endl;




}

signed main()
{
    ios;
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
