#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;

void dijkstra(vector<vector<ll>>& dp, ll startVertex, ll endVertex, vll& dist, vll& path) {
    ll size_dp = dp.sz;
    vector<bool> visited(size_dp, false);
    dist.assign(size_dp, inf);
    path.assign(size_dp, -1);

    dist[startVertex] = 0;

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, startVertex});

    while (!pq.empty()) {
        ll u = pq.top().S;
        pq.pop();

        if (u == endVertex) {
            break;
        }

        if (visited[u]) {
            continue;
        }

        visited[u] = true;

        FOR(v, 0, size_dp) {
            if (dp[u][v] != 0 && !visited[v]) {
                ll newDist = dist[u] + dp[u][v];
                if (newDist < dist[v]) {
                    dist[v] = newDist;
                    path[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }
    }
}

signed main() {
    optimus_prime;

    int numVertices, numEdges;
    cin >> numVertices >> numEdges;

    vector<vector<ll>> dp(numEdges, vll(numEdges, 0));

    FOR(i, 0, numEdges) {
        int u, v, weight;
        cin >> u >> v >> weight;
        dp[u - 1][v - 1] = weight;
        dp[v - 1][u - 1] = weight;
    }

    vll dist, path;
    dijkstra(dp, 0, numVertices - 1, dist, path);

    vll shortestPath;
    if (dist[numVertices - 1] == inf) {
        cout << -1 << endl;
    } else {
        for (ll v = numVertices - 1; v != -1; v = path[v]) {
            shortestPath.pb(v + 1);
        }
        reverse(shortestPath.begin(), shortestPath.end());
        for (ll v : shortestPath) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
