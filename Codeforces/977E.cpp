#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

vector<pair<int, int>> p;
set<pair<int, int>> st;
set<int> st1;
vector<int> res, res1, comp;
vector<bool> was;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

bool hasCycleInComponent = false;

void dfs(ll curr, ll parent, ll start)
{
    was[curr] = true;
    comp.pb(curr + 1);

    for (int i : g1[curr]) {
        if (!was[i]) {
            dfs(i, curr, start);
        } else if (i != parent && i == start) {
            hasCycleInComponent = true;
        }
    }
}

int connectedComponent()
{
    int component = 0;
    for (int i = 0; i < g1.sz; i++) was[i] = false;

    for (int i = 0; i < g1.sz; i++) {
        if (!was[i]) {
            comp.clear();
            hasCycleInComponent = false;
            dfs(i, -1, i);
            if (hasCycleInComponent) {
                component++;
            }
        }
    }
    return component;
}

void solve()
{
    comp.clear(); was.clear();
    int n, m;
    cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1);
    }

    int comp = connectedComponent();
    cout << comp << endl;


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
