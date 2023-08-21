#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();

    for (int i = 0; i < (n / 2) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES" << "\n";
            return;
        }
    }

    cout << "NO" << "\n";;
}

int main() {
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }








    return 0;
}

