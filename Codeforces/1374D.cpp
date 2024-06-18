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
       int n, k;
       cin >> n >> k;
       vector<int> a(n);
       map<int, int> mp;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              if(a[i] % k != 0){
                     mp[k - (a[i] % k)]++;
              }
       }

       ll mx = 0;
       for(auto i : mp){
              ll res = (i.S - 1) * k + i.F + 1;
              mx = max(mx, res);
       }

       cout << mx << endl;







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
