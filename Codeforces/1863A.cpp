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
    int n, m;
    cin >> n >> m;
    vector<int> dp(n);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
        ans += dp[i];
    }

    int mx = min(ans + dp[0], m);

    cout << min(mx, ans) << endl;



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

