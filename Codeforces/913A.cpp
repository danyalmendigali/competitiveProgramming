#include <bits/stdc++.h>
#include <windows.h>
#include <cmath>

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
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

int x[N];
map<ll, ll> mp;

void solve()
{
    ll n, a;
    cin >> n;
    cin >> a;

    ll f = pow(2, n);

    cout << a % f;
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
