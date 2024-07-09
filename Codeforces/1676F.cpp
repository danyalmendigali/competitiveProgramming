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
       vector<int> a(n);
       map<int, int> cnt;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              cnt[a[i]]++;
       }
       int mx = 0, l = 0, r = 0, c = 0;
       for(auto i : cnt){
              if(i.S >= k){
                     if(l + 1 == i.F){
                            c++;
                     }
                     else{
                            c = 1;
                     }

                     l = i.F;
                     if(c > mx){
                            mx = c;
                            r = l;
                     }
              }
       }

       if(c > mx){
              mx = c;
              r = l;
       }

       if(mx == 0){
              cout << -1 << endl;
              return;
       }
       else{
              cout << r - mx + 1 << " " << r << endl;
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
