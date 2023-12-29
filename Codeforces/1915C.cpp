#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

set<int> st1, st2;
map<int, int> mp1, mp2;
vector<int> ans1, ans2;

void solve()
{
    ll n, sum = 0; cin >> n;
    vector<ll> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        sum += dp[i];
    }

    ll res = sqrt(sum);
//    cout << res << endl;
    if(res * res == sum){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();



    return 0;
}
