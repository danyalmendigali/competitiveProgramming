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

GraphAdjList g2;
GraphAdjList g5;
Graph g;
Graph g3;

vector<int> res, res2, ans;
vector<char> used;
map<int, int> mp;
set<int> st, st2;
set<pair<int, int>> st4;
int n;

void dfs(int v)
{
    used[v] = true;
    res.pb(v + 1);
    for (int i : g5[v]) {
        if (!used[i]) {
            dfs(i);
        }
    }
}

void solve()
{
    st.clear(); mp.clear(); st2.clear(); st4.clear(); res.clear();
    int n, m;
    cin >> n >> m;
    g3.resize(m);
    g5.resize(n);
    used.assign(n, false);
    for(int i = 0; i < m; i++){
        cin >> g3[i].F >> g3[i].S;
        g5[g3[i].F - 1].push_back(g3[i].S - 1);
    }
//    cout << endl << endl;
//    for(int i = 0; i < n; i++){
//        cout << i + 1 << " ";
//        for(int j = 0; j < g5[i].sz; j++){
//            cout << g5[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl << endl;

    for(int i = 0; i < g5.sz; i++){
        if(!used[i]) dfs(i);
    }

    for(int i = 0; i < res.sz; i++){
        cout << res[i] << " ";
    }

// 4 5
// 1 4
// 2 4
// 2 3
// 3 4





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
