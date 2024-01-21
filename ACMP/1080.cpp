#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie();

using namespace std;

ll get(ll i, vector<int>& dp)
{
    return dp[i - 1];
}

vector<int> update(ll l, ll r, ll x, vector<int>& dp)
{
    for (int i = l - 1; i < r; i++) {
        dp[i] = x;
    }
    return dp;
}

vector<int> add(ll l, ll r, ll x, vector<int>& dp)
{
    for (int i = l - 1; i < r; i++) {
        dp[i] += x;
    }
    return dp;
}

ll rsq(ll l, ll r, const vector<int>& dp)
{
    ll sum = 0;
    for (int i = l - 1; i < r; i++) {
        sum += dp[i];
    }
    return sum;
}

ll rmq(ll l, ll r, const vector<int>& dp)
{
    int mx = 1001; // Initialize with a large value
    for (int i = l - 1; i < r; i++) {
        mx = min(mx, dp[i]);
    }
    return mx;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
    }
    int m;
    cin >> m;
    string str;
    int a, b, c, g, h;
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (str == "rsq") {
            cin >> g >> h;
            cout << rsq(g, h, dp) << endl;
        }
        if (str == "update") {
            cin >> a >> b >> c;
            dp = update(a, b, c, dp);
        }
        if (str == "rmq") {
            cin >> a >> b;
            cout << rmq(a, b, dp) << endl;
        }
        if (str == "add") {
            cin >> a >> b >> c;
            dp = add(a, b, c, dp);
        }
        if (str == "get") {
            cin >> a;
            cout << get(a, dp) << endl;
        }
    }
}

int main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while (t--)
        solve();

    return 0;
}
