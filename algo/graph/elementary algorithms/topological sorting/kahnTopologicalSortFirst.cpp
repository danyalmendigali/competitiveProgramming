#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

vector<bool> was;
vector<vector<int>> g1;
vector<pair<int, int>> g2;
vector<int> path;

void dfs(int curr) {
    was[curr] = true;
    path.pb(curr + 1);
    for(int i : g1[curr]){
        if(!was[i]) dfs(i);
    }
}

void kahnTopologicalSort(int n) {
    vector<int> inDegree(n, 0);

    for (int i = 0; i < g2.sz; ++i) {
        inDegree[g2[i].S - 1]++;
    }

    queue<int> q;
    for (int i = 0; i < n; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        path.pb(v + 1);

        for (int i : g1[v]) {
            if (--inDegree[i] == 0) {
                q.push(i);
            }
        }
    }
}

void solve() {
    was.clear(); path.clear();
    int n, m; cin >> n >> m;
    was.assign(n, false);
    g1.resize(n); g2.resize(m);

    for(int i = 0; i < m; i++){
        cin >> g2[i].F >> g2[i].S;
        g1[g2[i].F - 1].push_back(g2[i].S - 1);
    }

    kahnTopologicalSort(n);

    cout << path.sz << endl;
    for(int i = 0; i < path.sz; i++){
        cout << path[i] << " ";
    }
    cout << endl;
}

signed main() {
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
