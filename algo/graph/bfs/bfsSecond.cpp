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
#define __mendigali__ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

vector<bool> was;
vector<int> res1, res2;
set<int> st1;
map<int, int> mp1;
set<pair<int, int>> stPair;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;

void bfs(int startPoint, int endPoint, GraphAdjList graph)
{
    was.clear(); stPair.clear();
    int size_graph = graph.sz;
    was.assign(size_graph, false);
    queue<int> q;
    vector<int> d(size_graph), p(size_graph);
    q.push(startPoint);
    p[startPoint] = - 1;
    was[startPoint] = true;
    while(!q.empty()){
        int numFront = q.front();
        q.pop();
        for(int i = 0; i < graph[numFront].sz; i++){
            int to = graph[numFront][i];
            stPair.insert({i + 1, numFront + 1});
            if(!was[to]){
                was[to] = true;
                q.push(to);
                d[to] = d[numFront] + 1;
                p[to] = numFront;
            }
        }
    }
    if(!was[endPoint]){
        cout << "No path!" << endl;
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
    }

}

void solve()
{
    was.clear(); res1.clear(); stPair.clear();
    int n, m; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }
    int startPoint, endPoint;
    cin >> startPoint >> endPoint;
    startPoint--; endPoint--;
    bfs(startPoint, endPoint, g1);
    cout << endl;
    for(pair<int, int> i : stPair){
        cout << i.F << " " << i.S << endl;
    }

}

signed main()
{
    __mendigali__;
    int t;
    //cin >> t;
    t = 1;
    while(t--) solve();

    return 0;
}
