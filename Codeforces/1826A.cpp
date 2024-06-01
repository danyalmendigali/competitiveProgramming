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
       int n; cin >> n;
       int f[n + 9];
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
              f[a[i]]++;
       }
       sort(all(a));
       int res = 0;
       for(int i = 0; i < a.sz; i++){
              if(a[i] < a.sz){
                     res++;
              }
       }
       if(res != 0){
              cout << res << endl;
              return;
       }
       cout << -1 << endl;





}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;

       cin >> t;
       while(t--) solve();



       return 0;
}
