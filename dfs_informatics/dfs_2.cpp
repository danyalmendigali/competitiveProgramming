#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphVertexList = vector<pair<vertex, vertex>>;

vector<bool> used;
vector<int> res, res2, res3, res4;
set<int> st1, st2;
map<int, int> mp1, mp2;

GraphVertexList g2;

void dfs(int v)
{
    used[v] = true;
    res.pb(v + 1);
    for(auto edge : g2){
        int to = edge.F;
        int from = edge.S;
        if(to == v && !used[from - 1]){
            dfs(from - 1);
        }
        else if(from == v && !used[to - 1]){
            dfs(to - 1);
        }
    }
}

void solve()
{
    used.clear(); res.clear();
    int n, m; cin >> n >> m;
    used.assign(n, false);
    g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
    }

    for(int i = 0; i < n; i++){
        if(!used[i]){
            dfs(i);
        }
    }
//    for(int i = 0; i < res.sz; i++){
//        cout << res[i] - 1 << " ";
//    }
    bool ok = true;
    for(int i = 0; i < n; i++){
        if(!used[i]){
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    // cin >> t;
    while(t--)
        solve();



    return 0;
}
