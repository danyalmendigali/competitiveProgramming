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
Graph g;

vector<int> res, res2, ans;
map<int, int> mp;
set<int> st, st2;
set<pair<int, int>> st4;

void solve()
{
    st.clear(); mp.clear(); st2.clear(); st4.clear();
    int n, m, ans = 0; cin >> n >> m;
    g.resize(m);
    g2.resize(n);
    for(int i = 0; i < m; i++){
        cin >> g[i].F >> g[i].S;
        g2[g[i].F - 1].push_back(g[i].S - 1);
        g2[g[i].S - 1].push_back(g[i].F - 1);

    }
    for(int i = 0; i < n; i++){
        sort(all(g2[i]));
        g2[i].erase(unique(all(g2[i])), g2[i].end());
        st.insert(g2[i].sz);
    }

    if(st.sz == 1){
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
    while(t--)
        solve();



    return 0;
}
