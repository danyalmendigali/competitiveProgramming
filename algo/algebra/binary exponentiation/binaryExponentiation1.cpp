#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;

ll binpow(ll a, ll n)
{
    if(n == 0) return 1;
    if(n % 2 == 1) return binpow(a, n - 1) * a;
    else{
        ll c = binpow(a, n / 2);
        return c * c;
    }
}

void solve()
{
    ll a, b; cin >> a >> b;
    ll res = binpow(a, b);
    cout << res << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
