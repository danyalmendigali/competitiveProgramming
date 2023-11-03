#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll INT_MAX = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

ll a[N][N];
ll countA = 0;


// O(n) потому что один вложенный цикла

// Функция для решения задачи
void solve()
{
    int n;
    cout << "Введите размер вектора: ";
    cin >> n;
    vector<int> dp(n);
    cout << "Введите вектор: ";

    // Считываем элементы массива
    for(int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }

    int best = 0, sum = 0;

    // Проходим по массиву и находим максимальную сумму подпоследовательности
    for(int k = 0; k < n; k++)
    {
        sum = max(dp[k], sum + dp[k]);
        best = max(best, sum);
    }

    // Выводим результат
    cout << "Максимальная сумма подпоследовательности: " << best << endl;
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;


    solve();






    return 0;
}
