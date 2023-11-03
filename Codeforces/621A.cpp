#include <bits/stdc++.h>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<int>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e5 + 5;
const ll inf = 1e9;
const ll INF = 1e9 + 9;
const ll mod = 1e9 + 7;

int x[N];
map<ll, ll> mp;

void solve()
{
    ll  n;
    ll sum = 0;
    cin >> n;
    vector<ll> dp(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> dp[i];
        sum += dp[i];
    }

    if (sum % 2 == 0) {
        cout << sum << endl;
        return;
    }

    ll ans = INF;
    for (ll i = 0; i < n; i++) {
        if (dp[i] % 2 == 1) {
            ans = min(ans, dp[i]);
        }
    }

    if (ans != INF) {
        cout << sum - ans << endl;
    } else {
        cout << 0 << endl;
    }
}



signed main(){
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();











    return 0;
}
