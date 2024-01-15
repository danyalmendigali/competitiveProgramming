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
#define all(dp) dp.begi(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

vector<bool> was;
vector<int> res1, res2, topologicalSort;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

void dfs(ll curr)
{
    was[curr] = true;
    for(int i : g1[curr]){
        int to = g1[curr][i];
        if(!was[to]) dfs(to);
    }
    topologicalSort.pb(curr);
}

void topological_sort()
{
    for(int i = 0; i < g1.sz; i++) was[i] = false;
    topologicalSort.clear();
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]) dfs(i);
    }
    reverse(all(topologicalSort));

}

void solve()
{
    was.clear(); topologicalSort.clear();

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
