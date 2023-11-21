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
unordered_map<int, int> mp;

void solve() {
    mp.clear();
    int n;
    cin >> n;
    ll res = 0;
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
        res += mp[dp[i] - i];
        mp[dp[i] - i]++;
    }

    cout << res << endl;
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
