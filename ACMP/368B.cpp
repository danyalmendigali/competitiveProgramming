#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e5 + 9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

set<int> st;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> dp(n);
    ll ans[N];
    for (ll i = 0; i < n; i++) {
        cin >> dp[i];
    }
    set<ll> st;
    for (ll i = n - 1; i >= 0; i--) {
        st.insert(dp[i]);
        ans[i] = st.size();
    }
    ll num;
    for (ll i = 0; i < m; i++) {
        cin >> num;
        cout << ans[num - 1] << endl;
    }
}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}
