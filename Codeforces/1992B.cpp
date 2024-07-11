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
       int n, k; cin >> n >> k;
       vector<int> a(k);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }
       int mx = -1e9;
       int ind = -1;
       int sum = 0, sum2 = 0;
       for(int i = 0; i < a.sz; i++){
              if(mx < a[i]){
                     mx = a[i];
                     ind = i;
              }
       }


       for(int i = 0; i < a.sz; i++){
              if(a[i] >= 2 && ind != i){
                     sum += a[i] - 1;
              }
              if(ind != i){
                   sum2 += a[i];
              }
       }
       cout << sum  + sum2 << endl;



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
