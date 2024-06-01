#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()


void solve()
{
       ll n; cin >> n;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       ll res = 0;
       sort(all(a));
       /*
       for(int i = 0; i < a.sz; i++){
              cout << a[i] << " ";
       }
       */
       for(int i = 0; i < a.sz - 1; i++){
              if(a[i + 1] <= a[i]){
                     ll g = a[i + 1] - a[i];
                     a[i + 1] += g + 1;
                     res += g + 1;
              }
       }
       cout << res << endl;



}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;

       //cin >> t;
       while(t--) solve();



       return 0;
}
