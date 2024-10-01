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
       int n, q; cin >> n >> q;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<int> pref(n + 1, 0);
       pref[0] = 0;
       sort(all(a));
       reverse(all(a));
       for(int i = 0; i < n; i++){
              pref[i + 1] = pref[i] + a[i];
       }

       int qn = 0;
       for(int i = 0; i < q; i++){
              cin >> qn;
              auto it = lower_bound(all(pref), qn);
              if(pref[0] >= qn){
                     cout << 1 << endl;
              }
              if(it != pref.end()){
                     int id = distance(pref.begin(), it);
                     cout << id << endl;
              }
              else{
                     cout << -1 << endl;
              }
       }




}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t = 1;
       cin >> t;
       while(t--) solve();




       return 0;
}
