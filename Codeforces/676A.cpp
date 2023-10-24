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

set<int> st;
map<string, int> mp;

void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    int mx = -1, mn = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> dp[i];
        if(dp[i] == n)
        {
            mx = i;
        }
        if(dp[i] == 1)
        {
            mn = i;
        }
    }

    int ans = abs(mx - mn);
    if (mx < mn) swap(mx, mn);
    if (mn != 0) ans = max(ans, mx);
    if (mx != n - 1) ans = max(ans, n - 1 - mn);

    cout << ans << endl;








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
