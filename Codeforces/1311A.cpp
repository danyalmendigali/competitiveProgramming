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
    ll a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    while(max(a, b) <= c)
    {
        if(b < a) b += a;
        else  a += b;
        cnt++;
    }

    cout << cnt << endl;

}


signed main()
{
    optimus_prime;

    ll t;
    t = 1;
     cin >> t;
    while(t--)
    {
        solve();
    }




    return 0;
}
