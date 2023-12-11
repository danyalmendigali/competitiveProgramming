#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;


void solve()
{
    int size_vector1, size_vector2;
    cin >> size_vector1 >> size_vector2;

    vector<int> vector1(size_vector1);
    vector<int> vector2(size_vector2);

    vector<int> result;

    for(int i = 0; i < size_vector1; i++)
    {
        cin >> vector1[i];
    }

    for(int i = 0; i < size_vector2; i++)
    {
        cin >> vector2[i];
    }

    for(int i = 0; i < size_vector1; i++)
    {
        for(int j = 0; j < size_vector2; j++)
        {
            if(vector1[i] == vector2[j])
            {
                result.push_back(vector1[i]);
            }
        }
    }

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

}

int main() {
    cin.tie(0);

    solve();








    return 0;
}
