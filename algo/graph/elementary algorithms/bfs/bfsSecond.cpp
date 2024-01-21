#include <iostream>
#include <string>
#include <vector>
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
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

vector<pair<int, int>> g2;
vector<vector<int>> g1;
vector<bool> was;

void bfs(int startPoint, int endPoint, const vector<vector<int>>& graph)
{
    was.clear();
    int size_graph = graph.sz;
    was.assign(size_graph, false);
    queue<int> q;
    vector<int> d(size_graph), p(size_graph);
    p[startPoint] = -1;
    q.push(startPoint);
    was[startPoint] = true;
    while(!q.empty()){
        int numFront = q.front(); q.pop();
        for(int i = 0; i < graph[numFront].sz; i++){
            int to = graph[numFront][i];
            if(!was[to]){
                q.push(to);
                was[to] = true;
                d[to] = numFront + 1;
                p[to] = numFront;
            }
        }
    }
    if(!was[endPoint]){
        cout << -1 << endl;
        return;
    }
    else{
        vector<int> path;
        for(int i = endPoint; i != -1; i = p[i]) path.pb(i + 1);
        reverse(all(path));

        cout << "Size path: " << path.sz << endl;
        for(int i = 0; i < path.sz; i++){
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }
}

void solve()
{
    was.clear();
    int n, m; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i ].F - 1].push_back(g2[i].S - 1);
        g1[g2[i].S - 1].push_back(g2[i].F - 1);
    }
    int startPoint, endPoint;
    cin >> startPoint >> endPoint;
    startPoint--; endPoint--;
    bfs(startPoint, endPoint, g1);


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
