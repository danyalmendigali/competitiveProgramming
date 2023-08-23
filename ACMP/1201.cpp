#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int size_matrix;
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix)); // Инициализация 2D-вектора

    for(int i = 0; i < size_matrix; i++)  // Начало с 0
    {
        for(int j = 0; j < size_matrix; j++)  // Начало с 0
        {
            cin >> matrix[i][j];
        }
    }

    vector<pair<int, int>> edges;  // Вектор для хранения рёбер

    for(int i = 0; i < size_matrix; i++)  // Начало с 0
    {
        for(int j = 0; j < size_matrix; j++)  // Начало с 0
        {
            if(matrix[i][j] == 1)
            {
                edges.push_back({i+1, j+1});  // +1, чтобы соответствовать условиям задачи (нумерация начинается с 1)
            }
        }
    }

    cout << size_matrix << " " << edges.size() << "\n";
    for(auto edge : edges)
    {
        cout << edge.first << " " << edge.second  << "\n";
    }
}

int main()
{
    solve();


    return 0;
}
