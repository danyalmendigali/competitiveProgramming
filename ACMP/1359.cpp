#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using Graph = vector<pair<vertex, vertex>>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

vector<int> res, res2, ans, comp;
map<int, int> mp;
set<int> st, st2;
vector<bool> was;

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
            comp.clear();
            component++;
            dfs(i);
        }
    }
    return component;
}

void solve()
{
    st.clear(); mp.clear(); st2.clear(); was.clear(); comp.clear();
    int n, m, probl = 0; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        if(g2[i].F == g2[i].S){
            probl++;
        }
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }
//    cout << endl << endl;
//    for(int i = 0; i < g1.sz; i++){
//        cout << i + 1 << " ";
//        for(int j = 0; j < g1[i].sz; j++){
//            cout << g1[i][j] + 1 << " ";
//        }
//        cout << endl;
//    }
     int component = numComponent();
     if(probl == 0 && component <= 1)
     {
         cout << "YES" << endl;
     }
     cout << "NO" << endl;






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
