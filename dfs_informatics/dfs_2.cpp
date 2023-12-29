#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define S second
#define F first
#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

vector<int> res1, res2;
vector<bool> used;


void dfs(ll cur)
{
    used[cur] = true;
    res1.pb(cur + 1);
    for(int i : g1[cur]){
        if(!used[i]) dfs(i);
    }
}


void solve()
{
    res1.clear(); used.clear();
    ll n, m; cin >> n >> m;
    g2.resize(m);
    g1.resize(n);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }
//    cout << endl << endl;
//    for(int i = 0; i < n; i++){
//        cout << i + 1 << " ";
//        for(int j = 0; j < g1[i].sz; j++){
//            cout << g1[i][j] + 1 << " ";
//        }
//        cout << endl;
//    }


    for(int i = 0; i < g1.sz; i++){
        if(!used[i]) dfs(i);
    }

    for(int i = 0; i < res1.sz; i++){
        cout << res1[i] << " ";
    }

}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
