#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


int mn_operations(vector<int> a, int startPoint)
{
       int start = startPoint;
       int res = 0;
       int n = a.sz;
       for(int i = 0; i < n; i++){
              if(a[i] % 2 != start){
                     int j = i + 1;
                     while(j < n && a[j] % 2 != start){
                            j++;
                     }

                     if(j < n)
                     {
                            swap(a[i], a[j]);
                            res += (j - i);
                     }

              }
              start = 1 - start;
       }
       return res;
}

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       int cnt_odd = 0, cnt_even = 0;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              if(a[i] % 2 == 0){
                     cnt_even++;
              }
              if(a[i] % 2 == 1){
                     cnt_odd++;
              }
       }
       if(abs(cnt_odd - cnt_even) > 1){
              cout << -1 << endl;
              return;
       }
       else{
              int res = INT_MAX;
              if(cnt_even >= cnt_odd){
                     res = min(res, mn_operations(a, 0));
              }
              if(cnt_odd >= cnt_even){
                     res = min(res, mn_operations(a, 1));
              }
              cout << res << endl;
       }



}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();



       return 0;
}
