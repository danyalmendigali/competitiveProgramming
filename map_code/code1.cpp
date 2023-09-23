#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <algorithm>
#include <set>
#include <map>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define cl clear()
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

map<ll, ll> mp;

void solve()
{
    mp.cl;

    cout << "Введите количество элементов: ";
    ll n;
    cin >> n;

    for(ll i = 0; i < n; i++)
    {
        cout << i << ") ";
        int a;
        cin >> a;
        mp[a] = i;
    }

    map<ll, ll> ::iterator it = mp.begin();
    cout << "А вот все отсартированно: " << endl;
    for(int i = 0; it != mp.end(); it++, i++)
    {
        cout << i << ") Ключ " << it -> first << ", значение " << it -> second << endl;
    }



}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    solve();





    return 0;
}
