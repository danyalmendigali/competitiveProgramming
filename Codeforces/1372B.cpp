#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve()
{
       ll n, m; cin >> n >> m;
       ll g = n - (m - 1);
       ll mx = (g * (g - 1)) / 2;



       ll res1 = n / m;
       ll res2 = res1 + 1;

       ll res3 = m - (n % m);
       ll res4 = n % m;

       ll mn = res3 * (res1 * (res1 - 1)) / 2 + res4 * (res2 * (res2 - 1)) / 2;


       cout << mn << " " << mx << endl;


}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();



       return 0;
}
