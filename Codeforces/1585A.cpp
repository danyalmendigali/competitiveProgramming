#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < dp.sz; i++)
    {
        cin >> dp[i];
    }

    int f = 1;
    for(int i = 0; i < n; i++)
    {
        if(dp[i] == 0)
        {
            if(i < n - 1 && dp[i + 1] == 0)
            {
                f = -1;
                break;
            }
            continue;
        }
        if(i > 0 && dp[i - 1] == 1)
        {
            f += 5;
        }
        else
        {
            f++;
        }
    }

    cout << f << endl;



}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
