#include <bits/stdc++.h>
using namespace std;



int main() {
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    vector<int> colors(n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        cin >> colors[i];
    }



    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 1 && colors[i] != colors[j])
            {
                sum++;
            }
        }
    }

    cout << sum / 2;











    return 0;
}

