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

map<int, int> mp;
set<pair<int, int>> st;

void solve() {
    int n, H, M;
    cin >> n >> H >> M;
    int minutes = H * 60 + M;
    int ans = 24 * 60 + 1;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int res = a * 60 + b;

        if (res == minutes) {
            ans = 0;
        }
        else if(res <= minutes)
        {
            ans = min(ans, 24 * 60 - minutes + res);
        }
        else
        {
            ans = min(res - minutes, ans);
        }
    }

    int ans1 = ans / 60;
    int ans2 = ans % 60;

    cout << ans1 << " " << ans2 << "\n";


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
