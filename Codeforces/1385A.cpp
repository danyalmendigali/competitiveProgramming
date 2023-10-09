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

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


void solve()
{
    vector<ll> dp(3);
    ll mx = 0;
    for(ll i = 0; i < 3; i++)
    {
        cin >> dp[i];
        mx = max(mx, dp[i]);
    }
    ll mn = dp[0];
    for(ll i = 0; i < 3; i++)
    {
        if(dp[i] <= mn)
        {
            mn = dp[i];
        }
    }

    ll a = 0;
    for(ll i = 0; i < 3; i++)
    {
        if(dp[i] == mx)
        {
            a++;
        }
    }

    if(a == 3)
    {
        cout << "YES" << endl;
        cout << mx << " " << mx << " " << mx << endl;
    }
    else if(a == 2)
    {
        cout << "YES" << endl;
        sort(all(dp));
        cout << mx << " " << dp[0] << " " << dp[0] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    ll t;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
