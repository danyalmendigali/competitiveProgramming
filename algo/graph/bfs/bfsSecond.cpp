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
ч
void bfs(int start, int endPoint, GraphAdjList graph)
{
    queue<int> q;
    q.push(start);
    int GraphAdjListSize = graph.sz;
    vector<bool> was(GraphAdjListSize);
    vector<int> d(GraphAdjListSize), p(GraphAdjListSize);
    was[start] = true;
    p[start] = -1;
    while(!q.empty()){
        int from = q.front();
        q.pop();
        for(int i = 0; i < graph[from].sz; i++){
            int to = g1[from][i];
            stPair.insert({to + 1, from + 1});
            if(!was[to]){
                was[to] = true;
                q.push(to);
                d[to] = d[from] + 1;
                p[to] = from;
            }
        }
    }
    if(!was[endPoint]){
        cout << "Problem!" << endl;
        return;
    }
    else{
        vector<int> path;
        for(int i = endPoint; i != -1; i = p[i]){
            path.push_back(i + 1);
        }
        reverse(path.begin(), path.end());
        cout << "Path: ";
        for(int i = 0; i < path.sz; i++){
            cout << path[i] << " ";
        }
    }
}

void solve()
{
    res1.clear(); st1.clear(); mp1.clear();
    int n, m;
    cin >> n >> m;
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1); //Если граф неориентированный
    }
    cout << endl << endl;
    for(int i = 0; i < g1.sz; i++){
        cout << i + 1 << " ";
        for(int j = 0; j < g1[i].sz; j++){
            cout << g1[i][j] + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    int start, endPoint;
    cin >> start >> endPoint;
    start--;
    endPoint--;

    bfs(start, endPoint, g1);
    cout << endl << endl;

    for(pair<int, int> i : stPair){
        cout << i.F << " " << i.S << endl;
    }
    cout << endl << endl;

}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}
