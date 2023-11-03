#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;

const int SIZE = 4;

void solve()
{
    int a = 0;

    vector<vector<char>> matrix(SIZE, vector<char>(SIZE));

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0 ; i < SIZE - 1; i++)
    {
        for(int j = 0; j < SIZE - 1; j++)
        {
            if(matrix[i][j] == matrix[i][j + 1] && matrix[i][j] == matrix[i + 1][j] && matrix[i][j] == matrix[i + 1][j + 1])
            {
                a++;
            }
        }
    }
    if(a == 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}



int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    solve();



    return 0;
}








