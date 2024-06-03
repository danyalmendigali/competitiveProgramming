#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve() {
    int n;
    cin >> n;

    map<int, vector<int>> mp;
    vector<int> a(n);
    int mx = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]].push_back(i + 1);
        mx = max(mx, static_cast<int>(mp[a[i]].sz));
    }

    int mn = n + 1;
    pair<int, int> ans_pos;

    for (const auto& p : mp) {
        if (p.S.sz == mx) {
            int diff = p.S.back() - p.S.front();
            if (diff < mn) {
                mn = diff;
                ans_pos = {p.S.front(), p.S.back()};
            }
        }
    }

    cout << ans_pos.F << " " << ans_pos.S << endl;
}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}
