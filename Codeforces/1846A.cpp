#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve()
{
    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if(a - b > 0)
        {
            cnt++;
        }

    }

    cout << cnt << "\n";
}


int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }








   return 0;
}

