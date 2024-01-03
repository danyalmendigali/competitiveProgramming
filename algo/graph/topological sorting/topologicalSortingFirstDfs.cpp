#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

vector<int> res1, res2, res3, comp;
vector<bool> was;
set<int> st1, st2;
map<int, int> mp1, mp2;


void dfs(ll curr)
{
    was[curr] = true;
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
    res1.pb(curr);
}

vector<int> topologicalSort()
{
    for(int i = 0; i < g1.sz; i++) was[i] = false;
    res1.clear();
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]) dfs(i);
    }
    reverse(res1.begin(), res1.end());

    return res1;
}


void solve()
{
    res1.clear(); was.clear(); st1.clear();
    int n, m; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }

    vector<int> ans = topologicalSort();
    for(int i : ans){
        cout << i + 1 << " ";
    }
    cout << endl;

}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
