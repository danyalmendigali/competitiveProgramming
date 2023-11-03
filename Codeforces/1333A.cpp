#include <bits/stdc++.h>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i == 0 && j == 0)
            {
                cout << "W";
            }
            else
            {
                cout << "B";
            }
        }
        cout << endl;
    }

}


signed main()
{
    optimus_prime;

    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }




    return 0;
}
