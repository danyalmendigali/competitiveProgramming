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
    ll n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<ll> dp(n);
    vector<ll> ans;
    for(ll i = 0; i < n; i++)
    {
        cin >> dp[i];
        if(dp[i] >= l && dp[i] <= r)
        {
            ans.pb(dp[i]);
        }
    }
    ll a = 0;

    sort(all(ans));
    ll sum = 0;
    for(ll i = 0; i < ans.sz; i++)
    {
        sum += ans[i];
        a++;
        if(sum > k)
        {
            sum -= ans[i];
            a--;
        }
    }
    cout << a << endl;
}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while (t--)
         solve();


    return 0;
}
