#include <iostream>
#include <string>
#include <vector>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


void solve()
{
       int n, s; cin >> n >> s;
       vector<int> a(n);
       ll sum = 0;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              sum += a[i];
       }
       if(sum <= s){
              cout << 0 << endl;
              return;
       }
       vector<int> b;
       vector<int> mx_n;
       int ind = -1;
       int mx = 0, sum_2 = 0;
       for(int i = 0; i < a.sz; i++){
              sum_2 += a[i];
              mx_n.pb(max(mx, a[i]));
              if(mx < a[i]){
                     mx = a[i];
                     ind = i + 1;
              }
              if(sum_2 > s){
                     cout << ind << endl;
                     return;
              }

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
