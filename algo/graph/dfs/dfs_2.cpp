#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphAdjPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphAdjPair g2;

vector<int> res1, res2;
vector<bool> used;
map<int, int> mp1, mp2;
set<int> st1, st2;

void dfs(ll curr)
{
    used[curr] = true;
    res1.pb(curr + 1);
    for(int i : g1[curr]){
        if(!used[i]) dfs(i);
    }
}

void solve()
{
    res1.clear(); used.clear();
    int n, m; cin >> n >> m;
    used.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }

    for(int i = 0; i < g1.sz; i++){
        if(!used[i]) dfs(i);
    }

    cout << endl << endl;
    for(int i = 0; i < g2.sz; i++){
        cout << res1[i] << " ";
    }
    cout << endl << endl;




}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();




    return 0;
}
