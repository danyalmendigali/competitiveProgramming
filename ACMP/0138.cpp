#include <iostream>
#include <vector>
#include <climits>
#include <windows.h>

using namespace std;

struct Edge {
    int source, dest, weight;
};

bool bellman_ford(int V, const vector<Edge>& edges, int source, vector<int>& distances, vector<int>& predecessors) {
    distances.assign(V, INT_MAX);
    predecessors.assign(V, -1);
    distances[source] = 0;

    for (int i = 0; i < V - 1; ++i) {
        for (const Edge& edge : edges) {
            if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.dest]) {
                distances[edge.dest] = distances[edge.source] + edge.weight;
                predecessors[edge.dest] = edge.source;
            }
        }
    }

    for (const Edge& edge : edges) {
        if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.dest]) {
            return false;
        }
    }

    return true;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int V, E;
    cin >> V >> E;

    vector<Edge> edges(E);

    for (int i = 0; i < E; ++i) {
        cin >> edges[i].source >> edges[i].dest >> edges[i].weight;
        edges[i].source--;  // Индексация с 0
        edges[i].dest--;    // Индексация с 0
    }

    int source = 0;  // Индексация с 0

    vector<int> distances, predecessors;
    if (bellman_ford(V, edges, source, distances, predecessors)) {
        for (int i = 0; i < V; ++i) {
            if (distances[i] == INT_MAX) {
                cout << 30000 << " ";
            } else {
                cout << distances[i] << " ";
            }
        }
    }

    return 0;
}
