#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll INF = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;
const ll SIZE_GRAPH = 1e5 + 5;

vector<int> res, res2;
vector<bool> used;
set<int> st1, st2;
map<int, int> mp1, mp2;
vector<int> graph[SIZE_GRAPH];

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphVertexList = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphVertexList g2;

void dfs(ll cur)
{
    used[cur] = true;
    res.pb(cur + 1);
    for(ll to : graph[cur]){
        if(!used[to])
            dfs(to);
    }
}

void solve()
{
    res.clear(); used.clear();
    ll a, b; cin >> a >> b;
    used.assign(a + 1, false);
    vector<ll> dp(a - 1);
    for(ll i = 0; i < a - 1; i++){
        cin >> dp[i];
        graph[i + 1].push_back(dp[i] + i + 1);
    }
    dfs(1);
    cout << endl << endl;
    for(ll i = 0; i < res.sz; i++){
        cout << res[i] << " ";
    }
    if(!used[b]){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
