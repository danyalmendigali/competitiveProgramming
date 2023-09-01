#include <bits/stdc++.h>
#include <algorithm>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i   , a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld long double
#define F first
#define S second

using namespace std;

const ll N = 55;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

ll a = 0;
ll b = 0;
void solve()
{
    ll size_dp;
    cin >> size_dp;

    vector<ll> dp(size_dp);
    FOR(i, 0, size_dp)
    {
        cin >> dp[i];
        if(dp[i] == -1)
        {
            a--;
        }
        else
        {
            a += dp[i];
        }


        if(a < 0)
        {
            b++;
            a = 0;
        }
    }
    cout << b << "\n";
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;


    solve();






    return 0;
}
