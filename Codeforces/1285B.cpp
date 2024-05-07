#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <numeric>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define ins() insert()
#define ers(a) erase();
#define fori(i, n) for(int i = 0; i < n; i++)
#define inf 1e18

int isLengthPermutation(vector<int>& vec)
{
       int mx = 0;
       int g = 0;
       for(int i = 0; i < vec.sz; i++){
              if(vec[i] > 0){
                     g++;
                     mx = max(mx, g);
              }
              else{
                     mx = max(mx, g);
                     g = 0;
              }
       }
       return mx;
}

void solve()
{
       ll n, num_pos = 0; cin >> n;
       ll yasser = 0;
       ll mx = 0;
       vector<ll> res;
       vector<ll> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
              if(a[i] >= 0){
                     num_pos++;
              }
              yasser += a[i];
       }
       ll ans = a[0], sum = 0, min_sum = 0, num = 0;
       for(int i = 0; i < a.sz - 1; i++){
              sum += a[i];
              ans = max(ans, sum - min_sum);
              min_sum = min(min_sum, sum);
              num++;

       }
       cout << ans << " " << yasser << endl;
       if(ans <= yasser && num_pos == a.sz){
              if(a[0] != 0 && a[a.sz - 1] != 0){
                     cout << "YES" << endl;
                     return;
              }
              cout << "NO" << endl;
              return;
       }
       else{
              cout << "NO" << endl;
              return;
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
