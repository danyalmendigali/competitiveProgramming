#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

const ll N = 1e6 + 5;
const ll INF = 1e18;


void solve()
{
    int n, m, k, w;
    cin >> n >> m >> k >> w;

    vector<int> a(w);
    for(int i = 0; i < w; i++) {
        cin >> a[i];
    }

    vector<int> l(n + 1, 0), c(m + 1, 0);

    for(int i = 1; i <= n - k + 1; i++) {
        l[i]++;
        if (i + k <= n) {
            l[i + k]--;
        }
    }

    for(int i = 1; i <= m - k + 1; i++) {
        c[i]++;
        if (i + k <= m) {
            c[i + k]--;
        }
    }

    for(int i = 1; i <= n; i++) {
        l[i] += l[i - 1];
    }

    for(int i = 1; i <= m; i++) {
        c[i] += c[i - 1];
    }

    vector<int> v;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            v.pb(l[i] * c[j]);
        }
    }

    sort(all(v), greater<int>());
    sort(all(a), greater<int>());

    ll ans = 0;
    for(int i = 0; i < w; i++) {
        ans += (ll)a[i] * v[i];
    }

    cout << ans << endl;

}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
