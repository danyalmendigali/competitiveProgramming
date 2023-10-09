#include <bits/stdc++.h>
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
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

int x[N];
map<ll, ll> mp;

void solve()
{
    ll n;
    cin >> n;
    ll x[n];
    ll a1 = 0, a2 = 0, a3 = 0;
    vector<ll> dp;
    for(ll i = 0; i < n; i++)
    {
        cin >> x[i];
        if(x[i] == 3)
        {
            a1++;
        }
        if(x[i] == 2)
        {
            a2++;
        }
        if(x[i] == 1)
        {
            a3++;
        }
    }

    dp.pb(a1);
    dp.pb(a2);
    dp.pb(a3);

    sort(all(dp));
    cout << dp[0] + dp[1];
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
