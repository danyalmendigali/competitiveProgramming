#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

int bfs(VectorVector &matrix, int startNum, int endNum)
{
    int size_matrix = matrix.size();
    vector <int> visited(size_matrix, 0);
    vector <int> prog(size_matrix, -1);

    queue <int> q;
    q.push(startNum);
    visited[startNum] = true;

    while(!q.empty())
    {
        int numfront = q.front();
        q.pop();
        for(int i = 1; i <= size_matrix; i++)
        {
            if(matrix[numfront][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
                prog[i] = numfront;
            }
        }
    }

    if (visited[endNum] == 0)
    {
        return -1;
    }

    vector <int> result;

    for(int i = endNum; i != -1; i = prog[i])
    {
        result.push_back(i);
    }

    cout << result.size() - 1 << "\n";


    return result.size() - 1;
}

int main() {

    int size_matrix;
    cin >> size_matrix;

    VectorVector myMatrix(size_matrix + 1);

    for(int i = 1; i <= size_matrix; i++)
    {
        myMatrix[i].resize(size_matrix + 1);
        for(int j = 1; j <= size_matrix; j++)
        {
            cin >> myMatrix[i][j];
        }
    }

    int startNum, endNum;
    cin >> startNum;
    cin >> endNum;

    bfs(myMatrix, startNum, endNum);

    return 0;
}
