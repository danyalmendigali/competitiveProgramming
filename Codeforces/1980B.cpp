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
       int n, f, k; cin >> n >> f >> k;
       vector<int> a(n);
       int res1 = 0, res2 = 0;
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       int g = a[f - 1];
       sort(all(a));
       reverse(all(a));
       for(int i = 0; i < a.sz; i++){
              if(a[i] == g){
                     res1++;
              }
       }
       int h = 0;
       for(int i = 0; i < k; i++){
              a.erase(a.begin());
       }

       for(int i = 0; i < a.sz; i++){
              if(a[i] == g){
                     res2++;
              }
       }
       if(res2 == 0){
              cout << "YES" << endl;
              return;
       }
       if(res1 > res2 && res2 != 0){
              cout << "MAYBE" << endl;
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
       cin >> t;
       while(t--) solve();

       return 0;
}
