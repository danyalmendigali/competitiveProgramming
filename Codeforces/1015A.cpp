#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> result;
    for(int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        for(int i = l; i <= r; i++)
        {
             result.push_back(i);
        }

        for(int i = 0; i < result.size() - 1; i++)
        {
            if(result[i] > m)
            {
                result.erase(result.begin() + i);
            }
        }
    }

    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end()); // 1, 2, 5


    vector<int> result_1;
    for(int i = 1; i <= m ; i++)
    {
        result_1.push_back(i);
    }

    vector<int> result_2;
    for (int num : result_1) {

    if (find(result.begin(), result.end(), num) == result.end()) {
            result_2.push_back(num);
        }
    }


    cout << result_2.size() << "\n";
    for(int i = 0; i < result_2.size(); i++)
    {
        cout << result_2[i] << " ";
    }



}

int main() {
    cin.tie(0);

    solve();








    return 0;
}

