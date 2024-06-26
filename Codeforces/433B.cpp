#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll unsigned long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios::sync_with_stdio(false);

using namespace std;


void solve()
{
       int n; cin >> n;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       int m; cin >> m;
       vector<ll> a2 = a;
       sort(all(a2));
       int a1, b1, c1;

       vector<ll> pref(a.sz);
       pref[0] = a[0];
       for(size_t i = 1; i < a.sz; i++){
              pref[i] = pref[i - 1] + a[i];
       }

       vector<ll> pref2(a2.sz);
       pref2[0] = a2[0];
       for(size_t i = 1; i < a2.sz; i++){
              pref2[i] = pref2[i - 1] + a2[i];
       }


       for(int i = 0; i < m; i++){
              cin >> a1 >> b1 >> c1;
              b1--;
              c1--;
              if(a1 == 1){
                     ll sum_in_range = pref[c1];
                     if(b1 > 0){
                            sum_in_range -= pref[b1 - 1];
                     }
                     cout << sum_in_range << endl;
              }
              if(a1 == 2){
                     ll sum_in_range2 = pref2[c1];
                     if(b1 > 0){
                            sum_in_range2 -= pref2[b1 - 1];
                     }
                     cout << sum_in_range2 << endl;
              }
       }
}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
