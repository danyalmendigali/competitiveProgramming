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
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(); cout.tie()

using namespace std;

vector<int> res1, res2, comp;
vector<bool> was;
set<int> st1, st2;
map<int, int> mp1, mp2;

using node = int;
using Edge = vector<node>;
using GraphAdjList = vector<vector<node>>;
using GraphPair = vector<pair<node, node>>;

GraphAdjList g1;
GraphPair g2;

void bfs(int startPoint, int endPoint, GraphAdjList graph)
{
    was.clear(); res1.clear();
    int size_graph = graph.sz;
    was.assign(size_graph, false);
    queue<int> q;
    vector<int> d(size_graph), p(size_graph);
    q.push(startPoint);
    was[startPoint] = true;
    p[startPoint] = -1;
    while(!q.empty()){
        int numFront = q.front();
        q.pop();
        for(int i = 0; i < g1[numFront].sz; i++){
            int to = graph[numFront][i];
            if(!was[to]){
                q.push(to);
                was[to] = true;
                d[to] = d[numFront] + 1;
                p[to] = numFront;
            }
        }
    }
    if(!was[endPoint]){
        cout << "No path" << endl;
        return;
    }
    else{
        vector<int> path;
        for(int i = endPoint; i != -1; i = p[i]){
            path.pb(i + 1);
        }
        reverse(all(path));
        for(int i = 0; i < path.sz; i++){
            cout << path[i] << " ";
        }
        return;
    }
}

void solve()
{
    was.clear(); res1.clear();
    int n, m; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1);
    }
    int startPoint, endPoint;
    cin >> startPoint >> endPoint;
    startPoint--; endPoint--;
    bfs(startPoint ,endPoint, g1);


}

signed main()
{
    _mendigali_;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
