#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define mendigalitrue ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
const ll inf = -1e9 - 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

set<int> st;
map<int , int> mp;
vector<ll> v, v1;

void solve() {
    int n;
    cin >> n;
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> dp[i];
    }

    int mx = inf;

    for (int i = 0; i < n; i++) {
        double sqr = sqrt(dp[i]);
        if (sqr != floor(sqr)) {
            mx = max(mx, dp[i]);
        }
    }

    cout << mx << endl;


}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();



    return 0;
}
