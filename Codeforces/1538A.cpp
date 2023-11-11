
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
const int INF = 1e9 + 9;
const int mod = 1e5 + 9;
const int square = 360;

map<int, int> mp1;
map<int, int> mp2;


void solve()
{
        int n;
        cin >> n;
        vector<int> dp(n);
        for (int i = 0; i < n; i++) {
            cin >> dp[i];
        }
        int mn = min_element(all(dp)) - dp.begin();
        int mx = max_element(all(dp)) - dp.begin();
        int res = min(max(mn, mx) + 1, min(n - mn, n - mx));

        cout << res << endl;


}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}

