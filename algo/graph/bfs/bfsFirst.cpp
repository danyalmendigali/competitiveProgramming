#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphAdjPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphAdjPair g2;

vector<int> res1, res2;
vector<bool> used;
map<int, int> mp1, mp2;
set<int> st1, st2;

void bfs(GraphAdjList g2, int n, int s)
{
    queue<int> q;
    q.push(s);
    used.resize(n);
    vector<int> d(n), p(n);
    used[s] = true;
    p[s] = -1;
    while(!q.empty())
    {
        int curr = q.front(); q.pop();
        for(int i = 0; i < g2[curr].sz; i++){
            int to = g2[curr][i];
            if(!used[to]){
                used[to] = true;
                q.push(to);
                d[to] = d[curr] + 1;
                p[to] = curr;
                res1.pb(p[to]);
            }
        }
    }
}

void solve()
{
    used.clear(); res1.clear();
    int n, m; cin >> n >> m;
    used.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].pb(g2[i].S - 1);
    }
    bfs(g1, n, 0);
    for(int i = 0; i < res1.sz; i++){
        cout << res1[i] << " ";
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
