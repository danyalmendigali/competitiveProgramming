#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb() push_back(a)
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define F first
#define S second

using namespace std;

using vertex = int;
using Edge = vector<vertex>;
using Graph = vector<pair<int, int>>;
using GraphAdjList = vector<vector<vertex>>;

Graph g;
GraphAdjList g2;

vector<int> res, res2, res3, ans;
set<int> st, st2;
vector<bool> used;
map<int, int> mp;

void dfs(int v)
{
    used[v] = true;
    res.pb(v + 1);
    for(int i : g2[v]){
        if(!used[i]) dfs(i);
    }
}

void solve()
{
    st.clear(), st.clear(), mp.clear(), res.clear(); used.clear();
    int n, m; cin >> n >> m;
    g2.resize(n);
    g.resize(m);
    used.assign(n, false);
    for(int i = 0; i < m; i++){
        cin >> g[i].F >> g[i].S;
        g2[g[i].F - 1].push_back(g[i].S - 1);
    }

    for(int i = 0; i < g2.sz; i++){
        if(!used[i]) dfs(i);
    }

    for(int i = 0; i < res.sz; i++){
        cout << res[i] << " ";
    }


}

signed main()
{
    optimus_prime;
    int t;
    //cin >> t;
    t = 1;
    while(t--)
        solve();


    return 0;
}
