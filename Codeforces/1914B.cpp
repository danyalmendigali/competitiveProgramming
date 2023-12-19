#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalutrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

void solve()
{
    int a, b; cin >> a >> b;
    vector<int> dp;
    for(int i = 1; i <= a; i++){
        dp.pb(i);
    }
    int g = abs(b - a);

    vector<int> res;
    for(int i = 0; i < g; i++){
        res.pb(dp[i]);
    }

    reverse(res.begin(), res.end());
    for(int i = g; i < dp.sz; i++){
        res.pb(dp[i]);
    }

    for(int i = 0; i < res.sz; i++){
        cout << res[i] << " ";
    }
    cout << endl;




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
