#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

vector<bool> was;
vector<int> res1, res2;
set<int> st1, st2;
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
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
    res1.pb(curr + 1);
}

void topologicalSort()
{
    res1.clear();
    for(int i = 0; i < g1.sz; i++) was[i] = false;
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]) dfs(i);
    }
    reverse(all(res1));
    for(int i = 0; i < res1.sz; i++){
        cout << res1[i] << " ";
    }
    cout << endl;
}

void solve()
{
    was.clear(); res1.clear();
    int n, m; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1);
    }
    topologicalSort();

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
