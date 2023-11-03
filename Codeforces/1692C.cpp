#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>

using namespace std;

const int SIZE = 8;

bool solve()
{
    vector<vector<char>> myVector(SIZE, vector<char>(SIZE));
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cin >> myVector[i][j];
        }
    }

    for (int i = 1; i < SIZE - 1; i++)
    {
        for (int j = 1; j < SIZE - 1; j++)
        {
            if (myVector[i][j] == '#' &&
                myVector[i - 1][j - 1] == '#' &&
                myVector[i - 1][j + 1] == '#' &&
                myVector[i + 1][j - 1] == '#' &&
                myVector[i + 1][j + 1] == '#')
            {
                cout << i + 1 << " " << j + 1 << "\n";
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
       solve();


    return 0;
}
