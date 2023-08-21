#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == s2[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
}

int main() {
    cin.tie(0);

    solve();








    return 0;
}

