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
       ll n; cin >> n;
       vector<ll> a(n);
       for(ll i = 0; i < n; i++) cin >> a[i];


       if(is_sorted(all(a))){
              cout << 0 << endl;
              return;
       }
       ll pos = -1;
       ll mn = *min_element(all(a));

       for(ll i = 0; i < a.sz; i++){
              if(a[i] == mn){
                     pos = i;
                     break;
              }
       }

       bool ok = true;
       for(int i = pos + 1; i < n; i++){
              if(a[i] < a[i - 1]){
                     ok = false;
                     break;
              }
       }

       if(!ok){
              cout << -1 << endl;
              return;
       }
       else{
              cout << pos << endl;
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
