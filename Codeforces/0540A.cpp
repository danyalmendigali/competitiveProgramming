#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve()
{
    int n;
    cin >> n;

    string s1, s2;
    cin >> s1 >> s2;
    int moves = 0;

    for(int i = 0; i < n; i++)
    {
        int dist = abs(s1[i] - s2[i]);
        moves += min(dist,  10 - dist);
    }

    cout << moves;

}


int main() {
    cin.tie(0);


        solve();







    return 0;
}

