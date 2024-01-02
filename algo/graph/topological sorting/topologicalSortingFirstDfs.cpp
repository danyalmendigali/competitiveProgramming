#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;


using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

vector<int> res1, res2, order;
vector<bool> was;
set<int> st1, st2;
map<int, int> mp1, mp2;

GraphAdjList g1;
GraphPair g2;

void dfs(ll curr)
{
    was[curr] = true;
    res1.pb(curr + 1);
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
    order.pb(curr + 1);
}

void solve()
{
    order.clear(); res1.clear(); was.clear();
    int n, m; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S);
    }
    cout << endl << endl;
    for(int i = 0; i < g1.sz; i++){
        cout << i + 1 << " ";
        for(int j = 0; j < g1[i].sz; j++){
            cout << g1[i][j] << " ";
        }
        cout << endl;
    }


    dfs(1);
    reverse(order.begin(), order.end());
    cout << order.sz << endl;
    for(int i = 0; i < order.sz; i++){
        cout << order[i] << " ";
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
