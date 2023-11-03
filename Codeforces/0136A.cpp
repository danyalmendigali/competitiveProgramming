#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> gives(n + 1);
    for(int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;
        gives[p] = i;
    }


    for(int i = 1; i <= n; i++)
    {
        cout << gives[i] << " ";
    }
}

int main() {

    solve();




    return 0;
}
