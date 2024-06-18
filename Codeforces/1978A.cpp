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
#define lwb lower_bound
#define upb upper_bound
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

const ll MOD = 1e4 + 7;


void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       int mx = -1;
       int pos1 = -1;
       for(int i = 0; i < a.sz; i++){
              if(a[i] > mx){
                     mx = a[i];
                     pos1 = i;
              }
       }

       if(pos1 != n - 1){
              cout << a[pos1] + a[a.sz - 1] << endl;
              return;
       }
       else{
              int num_mx = 0;
              for(int i = 0; i < a.sz - 1; i++){
                     num_mx = max(num_mx, a[i]);
              }
              cout << a[pos1] + num_mx << endl;
              return;
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
