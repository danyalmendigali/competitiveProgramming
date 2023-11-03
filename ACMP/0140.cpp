#include <bits/stdc++.h>
#include <climits>

using namespace std;
const int INF = 1e9;

struct Edge
{
    int source, dest, weight;
};

bool bellman_ford(int size_matrix, vector<Edge> &edges, int startVertex)
{
    vector<int> dist(size_matrix, INF);
    dist[startVertex] = 0;

    for(int i = 0; i < size_matrix - 1; i++)
    {
        for(const Edge &edge : edges)
        {
            if(dist[edge.source] != INF && dist[edge.source] + edge.weight < dist[edge.dest])
            {
                dist[edge.dest] = dist[edge.source] + edge.weight;
            }
        }
    }

    // Проверка на наличие циклов отрицательного веса
    for (const Edge& edge : edges)
    {
        if (dist[edge.source] != INF && dist[edge.source] + edge.weight < dist[edge.dest])
        {
            return true;
        }
    }

    return false;
}

int main() {

    int size_matrix;
    cin >> size_matrix;
    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix));
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<Edge> edges;
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            if(matrix[i][j] != 100000)
            {
                edges.push_back({i, j, matrix[i][j]});
            }
        }
    }

    bool hasNegativeCycle = false;
    for (int i = 0; i < size_matrix; ++i)
    {
        if (bellman_ford(size_matrix, edges, i))
        {
            hasNegativeCycle = true;
            break;
        }
    }

    if(hasNegativeCycle)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
