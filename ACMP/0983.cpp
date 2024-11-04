
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
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
       ll n; cin >> n;
       vector<pair<ll, ll>> a(n);

       ll mx = -1;
       for(int i = 0; i < n; i++){
              cin >> a[i].F >> a[i].S;
       }
       vector<pair<ll, ll>> b = a;

       sort(a.begin(), a.end(), [](const pair<ll, ll>& p1, const pair<int, int>& p2) {
            return p1.S < p2.S;
       });

       map<pair<ll, ll>, ll> mp;

       for(int i = 0; i < a.sz; i++){
              mx = max(mx, (a[i].F * a[i].S * 1ll));
              mp[{a[i].F, a[i].S}] = mx;
       }

       for(int i = 0; i < b.sz; i++){
              cout << mp[{b[i].F, b[i].S}] << endl;
       }






}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
