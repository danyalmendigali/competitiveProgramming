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
const int square = 360;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> dp(m);

    for (int i = 0; i < m; i++) {
        cin >> dp[i];
    }

    sort(all(dp));

    int mn = dp[n - 1] - dp[0];

    for (int i = 1; i <= m - n; i++) {
        int r = dp[i + n - 1] - dp[i];
        mn = min(mn, r);
    }

    cout << mn << endl;
}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
         solve();


    return 0;
}
