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


const ll maxN = 2 * 1e5;


void solve()
{
       int n, k, q;
       cin >> n >> k >> q;
       vector<int> a(maxN + 2, 0);

       for(int i = 0; i < n; i++){
              int l, r;
              cin >> l >> r;
              a[l]++;
              a[r + 1]--;
       }
       vector<int> res(maxN + 1, 0);
       int cnt = 0;

       for(int i = 1; i <= maxN; i++){
              cnt += a[i];
              if(cnt >= k){
                     res[i] = 1;
              }
       }

       vector<int> pref(maxN + 1, 0);
       for(int i = 1; i <= maxN; i++){
              pref[i] = pref[i - 1] + res[i];
       }

       while(q--){
              int a, b; cin >> a >> b;
              cout << pref[b] - pref[a - 1] << endl;
       }



}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
