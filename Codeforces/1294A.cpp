#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

#define ll long long

void solve()
{
    ll int a, b, c, n;
    cin >> a >> b >> c >> n;
    ll int sum_2;
    int max_sister  = max(a, max(b, c));

    ll int sum = (max_sister - a) + (max_sister - b) + (max_sister - c);
    n -= sum;


    if((n % 3 == 0 && n >= 0))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

}


int main() {
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {

        solve();

    }







    return 0;
}

