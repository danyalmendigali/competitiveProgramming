#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <algorithm>
#include <windows.h>
using namespace std;

const int INF = 1e9;

void dijkstra(vector<vector<int>>& graph, int startVertex, int endVertex, vector<int>& dist, vector<int>& path) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    dist.assign(numVertices, INF);
    path.assign(numVertices, -1);

    dist[startVertex] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, startVertex});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (u == endVertex) {
            break;
        }

        if (visited[u]) {
            continue;
        }

        visited[u] = true;

        for (int v = 0; v < numVertices; ++v) {
            if (graph[u][v] != -1 && !visited[v]) { // Проверка на отсутствие ребра
                int newDist = dist[u] + graph[u][v];
                if (newDist < dist[v]) {
                    dist[v] = newDist;
                    path[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numVertices, startVertex, endVertex;
    cin >> numVertices >> startVertex >> endVertex;

    vector<vector<int>> graph(numVertices, vector<int>(numVertices, 0));

    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            cin >> graph[i][j];
        }
    }

    vector<int> dist, path;
    dijkstra(graph, startVertex - 1, endVertex - 1, dist, path);

    if (dist[endVertex - 1] == INF) {
        cout << -1; // Выводим -1, если пути не существует
    } else {
        cout << dist[endVertex - 1];
    }

    return 0;
}
