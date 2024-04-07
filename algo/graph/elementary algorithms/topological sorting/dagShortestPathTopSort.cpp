#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <limits.h>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

vector<int> khanTopSort(vector<vector<pair<int, int>>>& graph, vector<int>& mass, vector<int>& res) {
    int size_graph = graph.sz;
    queue<int> q;
    for (int i = 0; i < size_graph; i++) {
        if (mass[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int numFront = q.front();
        q.pop();
        res.push_back(numFront);
        for (auto& neighbor : graph[numFront]) {
            int neighborNode = neighbor.F;
            if (--mass[neighborNode] == 0) {
                q.push(neighborNode);
            }
        }
    }
    return res;
}

vector<int> DAGshortestPath(vector<vector<pair<int, int>>>& graph, vector<int>& res) {
    int size_graph = graph.sz;
    vector<int> shortestDist(size_graph, INT_MAX);
    shortestDist[res[0]] = 0;

    for (int i = 0; i < size_graph; ++i) {
        int node = res[i];
        if (shortestDist[node] != INT_MAX) {
            for (auto& neighbor : graph[node]) {
                int neighborNode = neighbor.F;
                int weight = neighbor.S;
                shortestDist[neighborNode] = min(shortestDist[neighborNode], shortestDist[node] + weight);
            }
        }
    }

    return shortestDist;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n);
    vector<int> g;
    vector<int> mass(n, 0);

    for (int i = 0; i < m; ++i) {
        int from, to, weight;
        cin >> from >> to >> weight;
        graph[from].emplace_back(to, weight);
        ++mass[to];
    }

    khanTopSort(graph, mass, g);
    for(int i = 0; i < g.sz; i++){
        cout << g[i] << " ";
    }
    cout << endl;
    vector<int> dist = DAGshortestPath(graph, g);

    for (int i : dist) {
        cout << i << " ";
    }
    cout << endl;
}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
