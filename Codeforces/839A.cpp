
#include <bits/stdc++.h>
#include <cmath>

#define mendigali ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
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

const int N = 2e5 + 5 , inf = 2e9 + 7;
const ll INF = 1e18 ,   mod = 1e9 + 7 , P = 6547;

map<string, ll> mp;
map<ll, ll> mp1, mp2;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
    }

    int res = 0;
    int c = 0;

    for (int i = 0; i < n; i++) {
        c += dp[i];
        if (c >= 8) {
            k -= 8;
            c -= 8;
        } else {
            k -= c;
            c = 0;
        }

        res++;

        if (k <= 0) {
            cout << res << endl;
            return;
        }
    }

    cout << -1 << endl;


}

signed main()
{
    mendigali;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
         solve();


    return 0;
}
