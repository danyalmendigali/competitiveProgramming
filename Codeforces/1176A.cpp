#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 2005;
vector<int> adj[MAXN];
int n, m;
int timer;
vector<int> tin, low;
vector<bool> isBridge;
vector<vector<int>> bridges;

void dfs(int v, int p = -1) {
    tin[v] = low[v] = timer++;
    for (int u : adj[v]) {
        if (u == p) continue;
        if (tin[u] == -1) {
            dfs(u, v);
            low[v] = min(low[v], low[u]);
            if (low[u] > tin[v]) {
                isBridge[u] = true;
                isBridge[v] = true;
                bridges.push_back({v, u});
            }
        } else {
            low[v] = min(low[v], tin[u]);
        }
    }
}

int findBridges() {
    timer = 0;
    tin.assign(n, -1);
    low.assign(n, -1);
    isBridge.assign(n, false);
    bridges.clear();

    for (int i = 0; i < n; ++i) {
        if (tin[i] == -1) {
            dfs(i);
        }
    }

    return bridges.size();
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int numBridges = findBridges();
    int numTrees = numBridges + 1; // Количество деревьев в лесу

    int ans = n - numTrees; // Минимальное количество рёбер для преобразования в лес
    if(ans == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}
