#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;

void solve()
{
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll res1 = (a + b) * c * d;
    ll res2 = (c * c) * a * b;
    cout << res1 - res2 << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();





    return 0;
}
