#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<int, int> mp;

void solve()
{
    int n, res = 0; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        mp[dp[i]]++;
        res = max(res, mp[dp[i]]);
    }
    cout << res << endl;
    for(int i = 0; i < n; i++){
        mp[dp[i]] = 0;
    }


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
