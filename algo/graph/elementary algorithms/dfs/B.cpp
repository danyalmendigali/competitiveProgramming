#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <queue>

#define ll long long
#define F first
#define S second
#define pb(a) push_back(a)
#define sz size()
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;


vector<int> res1, comp;
vector<int> mp1, mp2;
set<int> st1, st2;
vector<bool> was;


using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair =  vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;


void dfs(ll curr)
{
    was[curr] = true;
    comp.push_back(curr + 1);
    res1.pb(curr + 1);
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

void findComponentGraph() {
    for(int i = 0; i < g1.sz; i++) was[i] = false;
    for(int i = 0; i < g1.sz; i++) {
        if(!was[i]) {
            comp.clear();
            dfs(i);
            cout << comp.sz << endl;
            for(int j = 0; j < comp.sz; j++) {
                cout <<  comp[j] << " ";
            }
            cout << endl;
        }
    }
}

void solve()
{
    res1.clear(); was.clear(); comp.clear();
    int n, m;
    cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1);
    }
//    cout << endl;
//    for(int i = 0; i < g1.sz; i++){
//        cout << i + 1 << " ";
//        for(int j = 0; j < g1[i].sz; j++){
//            cout << g1[i][j]   + 1 << " ";
//        }
//        cout << endl;
//    }
    cout << numComponent() << endl;
    findComponentGraph();



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}

