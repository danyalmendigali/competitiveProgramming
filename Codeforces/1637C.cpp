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
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       if(n == 3 && a[1] % 2 != 0){
              cout << -1 << endl;
              return;
       }
       int cnt_e = 0, sum = 0;
       bool ok = false;

       for(int i = 1; i < n - 1; i++){
              if(a[i] > 1) ok = true;
              if(a[i] % 2 == 0){
                     cnt_e++;
              }
              sum += (a[i] + 1) / 2;
       }


       if(ok) cout << sum << endl;

       else cout << -1 << endl;




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
