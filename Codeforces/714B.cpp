#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

set<int> st1;

void solve()
{
       st1.clear();
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
              st1.insert(a[i]);
       }
       if(st1.sz > 3){
              cout << "NO" << endl;
              return;
       }
       if(st1.sz == 1){
              cout << "YES" << endl;
              return;
       }
       if(st1.sz == 2){
              cout << "YES" << endl;
              return;
       }
       if(st1.sz == 3){
              auto it = st1.begin();
              auto it2 = st1.begin();
              auto it3 = st1.begin();
              int mn1 = *it;
              int mn2 = *(++it2);
              int mn3 = *(++(++it3));
              if(mn3 - mn2 == mn2 - mn1){
                     cout << "YES" << endl;
                     return;
              }
              cout << "NO" << endl;
              return;
       }
       cout << "NO" << endl;
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
