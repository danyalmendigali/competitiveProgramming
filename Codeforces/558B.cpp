#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
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


void solve()
{
       int n; cin >> n;
       map<int, int> mp;
       vector<int> a(n);
       int mx = -1;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              mp[a[i]]++;
              mx = max(mx, mp[a[i]]);
       }
       vector<pair<ll, pair<ll, ll>>> ans;
       int mn = 1e9;
       for(pair<int, int> i : mp){
              if(i.S == mx){ // i.F
                     int pos1 = -1, pos2 = -1;
                     for(int j = 0; j < a.sz; j++){
                            if(a[j] == i.F){
                                   pos1 = j;
                                   break;
                            }
                     }
                     for(int j = a.sz - 1; j > 0; j--){
                            if(a[j] == i.F){
                                   pos2 = j;
                                   ans.push_back({abs((pos1 + 1) - (pos2 + 1)), {pos1 + 1, pos2 + 1}});
                                   mn = min(mn, abs((pos1 + 1) - (pos2 + 1)));
                                   break;
                            }
                     }
              }
       }
       for(int i = 0; i < ans.sz; i++){
              if(ans[i].F == mn){
                     cout << ans[i].S.F << " " << ans[i].S.S << endl;
                     return;
              }
       }



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
