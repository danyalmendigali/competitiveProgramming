#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalutrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using Graph = vector<pair<vertex, vertex>>;
using GraphAdjList = vector<vector<vertex>>;


Graph g;
GraphAdjList g2;

vector<int> res1, res2, res3;
vector<bool> used;
set<int> st, st2, st3;
map<int, int> mp;

void solve()
{
    st.clear(); st2.clear(); st3.clear(); mp.clear();
    int n, m;
    cin >> n >> m;
    g.resize(m);
    g2.resize(n);
    for(int i = 0; i < m; i++){
        cin >> g[i].F >> g[i].S;
        g2[g[i].F - 1].push_back(g[i].S);
    }
    for(int i = 0; i < g2.sz; i++){
        cout << i << " ";
        for(int j = 0; j < g2[i].sz; j++){
            cout << g2[i][j] << " ";
        }
        cout << endl;
    }


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
