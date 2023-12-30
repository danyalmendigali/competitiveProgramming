#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPairList = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPairList g2;

vector<int> res1, res2;
map<int, int> mp1, mp2;
set<int> st1, st2;
set<pair<int, int>> stPair;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

void bfs(int startPoint, int endPoint, GraphAdjList graph)
{
    queue<int> q;
    q.push(startPoint);
    int GraphAdjList = graph.sz;
    vector<bool> was(GraphAdjList, false);
    vector<int> d(GraphAdjList), p(GraphAdjList);
    was[startPoint] = true;
    p[startPoint] = -1;
    while(!q.empty()){
        int from = q.front(); q.pop();
        for(int i = 0; i < graph[from].sz; i++){
            int to = graph[from][i];
            if(!was[to]){
                was[to] = true;
                q.push(to);
                d[to] = d[from] + 1;
                p[to] = from;
            }
        }
    }
    if(!was[endPoint]){
        cout << -1 << endl;
    }
    else{
        vector<int> path;
        for(int i = endPoint; i != -1; i = p[i]){
            path.pb(i + 1);
        }
        cout << path.sz - 1 << endl;
//        for(int i = 0; i < path.sz; i++){
//            cout << path[i] << " ";
//        }
//        cout << endl;
    }
}

void solve()
{
    res1.clear(); mp1.clear(); st1.clear(); g1.clear();
    int n; cin >> n;
    g1.resize(n);

    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                g1[i].push_back(j);
                g1[j].push_back(i);
            }
        }
    }

    int startPoint, endPoint; cin >> startPoint >> endPoint;
    startPoint--; endPoint--;
//    cout << endl << endl;
//    for(int i = 0; i < g1.size(); i++){
//        cout << i + 1<< " ";
//        for(int j = 0; j < g1[i].size(); j++){
//            cout << g1[i][j] + 1 << " ";
//        }
//        cout << endl;
//    }
    bfs(endPoint, startPoint, g1);
}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}
