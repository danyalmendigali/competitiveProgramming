#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
       int n, s; cin >> n >> s;
       vector<int> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }
       int cnt_1 = count(all(a), 1);
       if(cnt_1 < s){
              cout << -1 << endl;
              return;
       }
       if(cnt_1 == s){
              cout << 0 << endl;
              return;
       }
       int l = 0, r = 0;
       int curr = 0;
       int mn = n;
       while(r < n){
              curr += a[r++];
              while(curr > s){
                     curr -= a[l++];
              }
              if(curr == s){
                     mn = min(mn, l + n - r);
              }
       }
       cout << mn << endl;



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
