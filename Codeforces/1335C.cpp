#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define S second
#define F first
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

// ---

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;

void solve()
{
    mp.clear(); st.clear();
    int n; cin >> n;
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
        mp[dp[i]]++;
        st.insert(dp[i]);
    }

    int mx = 0;
    for (const auto& i : mp) {
        mx = max(mx, i.S);
    }

    cout << max(min(int(st.sz) - 1, mx), min(int(st.sz), mx - 1)) << endl;
}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
