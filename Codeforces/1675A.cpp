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

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;

void solve()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;


    ll res1 = b - y;
    ll res2 = a - x;

    if(res1 < 0)
    {
        c += res1;
    }
    if(res2 < 0)
    {
        c += res1;
    }



    cout << (c >= 0 ? "YES" : "NO") << endl;






}


signed main()
{
    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();




    return 0;
}
