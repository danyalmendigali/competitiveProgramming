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
#define mendigalutrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;

vector<int> res1, res2, comp;
vector<bool> used;
set<int> st1, st2;
map<int, int> mp1, mp2;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

void solve()
{
    res1.clear(); used.clear(); st1.clear();
    int n, m, res = 0; cin >> n >> m;
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1);
    }
    for(int i = 0; i < g1.sz; i++){
        g1[i].erase(unique(g1[i].begin(), g1[i].end()), g1[i].end());
        if(g1[i].sz == n - 1) res++;
    }
    if(res == n){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
