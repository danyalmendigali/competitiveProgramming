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

vector<int> res1, res2, comp;
vector<bool> was;
set<int> st;
map<int, int> mp1, mp2;

using node = int;
using Edge = vector<node>;
using GraphAdjList = vector<vector<node>>;
using GraphPair = vector<pair<node, node>>;

GraphAdjList g1;
GraphPair g2;

void dfs(ll curr)
{
    was[curr] = true;
    for (int i = 0; i < g1.sz; i++) {
        if (!was[i]) dfs(i);
    }
    res1.pb(curr + 1);
}

vector<int> topologicalSort()
{
    for (int i = 0; i < g1.sz; i++) was[i] = false;
    res1.clear();
    for (int i = 0; i < g1.sz; i++) {
        if (!was[i]) dfs(i);
    }
    reverse(res1.begin(), res1.end());

    return res1;
}


void solve()
{
    was.clear(); res1.clear();
    int n, m; cin >> n >> m;
    g1.resize(n); g2.resize(m);
    for (int i = 0; i < m; i++) {
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }

    vector<int> ans = topologicalSort();
    for (int i = 0; i < ans.sz; i++) {
        cout << ans[i] << " ";
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
