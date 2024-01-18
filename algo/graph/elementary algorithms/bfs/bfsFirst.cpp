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
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;


vector<int> res1, res2, comp, path;
vector<bool> was;
vector<pair<int, int>> g2;
vector<vector<int>> g1;

void bfs(int startPoint, vector<vector<int>> graph)
{
    was.clear();
    was.assign(graph.sz, false);
    int size_graph = graph.sz;
    queue<int> q;
    q.push(startPoint);
    was[startPoint] = true;
    while(!q.empty()){
        int numFront = q.front();
        q.pop();
        for(int i = 0; i < size_graph; i++){
            if(graph[numFront][i] != 0 && !was[i]){
                q.push(i);
                was[i] = true;
            }
        }
    }
}

void solve()
{
    was.clear(); path.clear();
    int n, m; cin >> n >> m;
    g2.resize(m);
    g1.resize(n);
    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }
    int startPoint = 0;
    bfs(startPoint, g1);


}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
