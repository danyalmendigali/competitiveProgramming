#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

set<ll> st;

void precalc() {
    for (ll i = 1; i <= 1e4; i++) {
        st.insert(i * i * i);
    }
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= 1e4; i++) {
            if (st.find(n - i * i * i) != st.end()) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO\n";


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
