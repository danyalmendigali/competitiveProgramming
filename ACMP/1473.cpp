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
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

vector<int> res1, res2, res3, comp;
vector<bool> was;
set<int> st1, st2;
map<int, int> mp1, mp2;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

void dfs(ll curr)
{
    was[curr] = true;
    comp.pb(curr + 1);
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
}

int numComponent()
{
    int component = 0;
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]){
            component++;
            comp.clear();
            dfs(i);
        }
    }
    return component;
}

void connectedComponent()
{
    for(int i = 0; i < g1.sz; i++) was[i] = false;
    for(int i = 0; i < g1.sz; i++){
        if(!was[i]){
            comp.clear();
            dfs(i);
            cout << comp.sz << endl;
            for(int j = 0; j < comp.sz; j++){
                cout << comp[j] << " ";
            }
            cout << endl;
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }
    cout << endl;
    for(int i = 0; i < g1.sz; i++){
        cout << i + 1 << " ";
        for(int j = 0; j < g1[i].sz; j++){
            cout << g1[i][j] + 1 << " ";
        }
        cout << endl;
    }


    int num = numComponent();
    cout << num;
    cout << endl;
    connectedComponent();

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
