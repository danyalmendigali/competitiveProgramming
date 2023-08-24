#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> result;

    int f = n % m;
    int g = n / m;
    int result_1 = m - f;

    for(int i = 0; i < f; i++)
    {
        result.push_back(g + 1);
    }

    for(int i = 0; i < result_1; i++)
    {
        result.push_back(g);
    }


    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}

int main() {


    solve();


    return 0;
}


