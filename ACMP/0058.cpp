#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a = 0;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0 ; i < n - 1; i++)
    {
        for(int j = 0; j < m - 1; j++)
        {
            if(matrix[i][j] == matrix[i][j + 1] && matrix[i][j ] == matrix[i + 1][j] && matrix[i][j] == matrix[i + 1][j + 1])
            {
                a++;
            }
        }
    }
    if(a == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}


int main() {

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}

