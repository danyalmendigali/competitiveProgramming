#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>


// Topological Sort | Kahn's Algorithm | Graph Theory

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

vector<int> kahnAlgorithm(vector<vector<int>>& graph, vector<int>& mass, vector<int>& res)
{
    int size_graph = graph.sz;
    queue<int> q;
    for(int i = 0; i < size_graph; i++){
        if(mass[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int numFront = q.front();
        q.pop();
        res.pb(numFront);

        for(int adj : graph[numFront]){
            if(--mass[adj] == 0){
                q.push(adj);
            }
        }
    }
    return res;
}

void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> graph(n);
    vector<pair<int, int>> graph2(m);
    vector<int> g;
    vector<int> mass(n, 0);
    for(int i = 0; i < m; i++){
        cin >> graph2[i].F >> graph2[i].S;
        graph[graph2[i].F].push_back(graph2[i].S);
        mass[graph2[i].S]++;
    }
    kahnAlgorithm(graph, mass, g);
    for(int i : g){
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
