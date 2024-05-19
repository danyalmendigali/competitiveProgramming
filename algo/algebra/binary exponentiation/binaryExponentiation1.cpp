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

int binpow(int n, int m)
{
       if(m == 0) return 1;
       if(m % 2 == 0){
              int c = binpow(n, m / 2);
              return c * c;
       }
       else{
              return binpow(n, m - 1) * n;
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
