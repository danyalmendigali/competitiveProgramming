#include <bits/stdc++.h>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

vector<ll> subset;

void search(ll k, ll n)
{
    if(k == n + 1)
    {
        // Обработать подмножество
        cout << "Подмножество: ";
        for(ll num : subset)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        // Включить k в подмножество
        subset.pb(k);
        search(k + 1, n);
        subset.pop_back();
        // Не включать k в подмножество
        search(k + 1, n);
    }
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    ll n;
    cout << "Введите число: ";
    cin >> n;

    search(1, n);








    return 0;
}
