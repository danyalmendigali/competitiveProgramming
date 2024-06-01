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
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       sort(all(a));
       for(int i = 0; i < a.sz; i++){
              if(a[i] <= n - 1 - i){
                     if(i + 1 <= n - 1 && a[i + 1] > n - 1 - i){
                            cout << n - 1 - i << endl;
                            return;
                     }
                     else if(i == n - 1){
                            cout << 0 << endl;
                            return;
                     }
              }
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
