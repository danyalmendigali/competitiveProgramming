#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

void solve()
{
    vector<int> dp;
    int g; cin >> g;
    int n = 0;
    dp.pb(0);
    dp.pb(1);
    string s = "";
    for(int i = 0; i <= 1000; i++){
        s += 'o';
    }
    for(int i = 0; i < 15; i++){
        dp.pb(dp[i + 1] + dp[i]);
    }

    for(int i = 0; i < dp.sz; i++){
        s[dp[i]] = 'O';
    }
    s.erase(s.begin());
    for(int i = 0; i < g; i++){
        cout << s[i];
    }
    cout << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
