#include <bits/stdc++.h>
using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int MAXN = 1e5 + 5;

vector<pair<int, int>> adj[MAXN];
vector<int> dist(MAXN, inf);

void dijkstra(int start, int n) {
    dist[start] = 0;

    set<pair<int, int>> s;
    s.insert({0, start});

    while (!s.empty()) {
        int u = s.begin()->second;
        s.erase(s.begin());

        for (pair<int, int> edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                s.erase({dist[v], v});
                dist[v] = dist[u] + w;
                s.insert({dist[v], v});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, d, v, R;
    cin >> N >> d >> v >> R;

    for (int i = 0; i < R; i++) {
        int u, t, w, x;
        cin >> u >> t >> w >> x;
        adj[u].push_back({w, x});
    }

    dijkstra(d, N);

    if (dist[v] == inf) {
        cout << -1 << endl;
    } else {
        cout << dist[v] << endl;
    }

    return 0;
}
