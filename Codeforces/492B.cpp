
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

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

set <string> st;
map<string, int> mp;
map<string, int> mp2;

void solve()
{
    int n, l;
    cin >> n >> l;

    vector<int> dp(n);
    for (int i = 0; i < n; ++i) {
        cin >> dp[i];
    }

    sort(all(dp));

    double mx = max(dp[0], l - dp[n - 1]);

    for (int i = 1; i < n; ++i) {
        double dist = (dp[i] - dp[i - 1]) / 2.0;
        mx = max(mx, dist);
    }

    cout.precision(10);
    cout << fixed << mx << endl;

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
