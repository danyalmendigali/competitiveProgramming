#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    vector<int> dp2(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    for(int i = 0; i < n; i++){
        cin >> dp2[i];
    }

    vector<pair<int, int>> pairs1;
    vector<pair<int, int>> pairs2;
    for (int i = 0; i < dp.sz; ++i){
        pairs1.push_back({dp[i], i});
        pairs2.push_back({dp2[i], i});
    }
    sort(pairs1.rbegin(), pairs1.rend());
    for (auto p : pairs1) {
        cout << p.second + 1 << " ";
    }
    cout << endl;
    sort(pairs2.rbegin(), pairs2.rend());
    vector<ll> g;
    for(auto p : pairs2){
        g.pb(p.second + 1);
    }
    reverse(all(g));
    for(int i = 0; i < g.sz; i++){
        cout << g[i] << " ";
    }




}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
