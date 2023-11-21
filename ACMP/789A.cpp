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

void solve() {
    int a, b; cin >> a >> b;
    int res = 0;
    vector<int> dp(a);
    for(int i = 0; i < a; i++){
        cin >> dp[i];
        res += (dp[i] + b - 1) / b;
    }


    int ans = (res + 1) / 2;
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
