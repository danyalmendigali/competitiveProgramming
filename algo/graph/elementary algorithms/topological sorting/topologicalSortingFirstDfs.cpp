#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<pair<int, int>> g2;
vector<vector<int>> g1;
vector<bool> was;
vector<int> res;

void dfs(ll curr)
{
    was[curr] = true;
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
    res.pb(curr + 1);
}

vector<int> toSo()
{
    for(int i = 0; i < g1.sz; i++) was[i] = false;
    res.clear();
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]) dfs(i);
    }
    reverse(all(res));
    return res;
}


void solve()
{
    was.clear(); res.clear();
    int n, m; cin >> n >> m;
    g1.resize(n); g2.resize(m);
    was.assign(n, false);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1);
    }

    vector<int> ans = toSo();
    for(int i = 0; i < res.sz; i++){
        cout << res[i] << " ";
    }





}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
