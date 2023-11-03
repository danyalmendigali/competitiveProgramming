
#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <algorithm>
using namespace std;

#define VectorVector vector<vector<int>>

const int INF = 1e9;

bool isBfsMatrix(vector<vector<int>> &matrix, int startPoint)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);
    vector<int> parent(size_matrix, -1);

    queue<int> q;
    q.push(startPoint);
    visited[startPoint] = true;

    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();
        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numFront][i] == 1)
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;

                    parent[i] = numFront;
                }

                else if(parent[numFront] != i)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    cin.tie(nullptr);


    int size_matrix;
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix, 0));
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    bool isCycle = isBfsMatrix(matrix, 0);

    if(isCycle)
    {
        cout << "1" << "\n";
    }
    else
    {
        cout << "0" << "\n";
    }





    return 0;
}
