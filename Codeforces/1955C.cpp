#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
       ll n, k; cin >> n >> k;
       vector<ll> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }
       ll h = a.sz;
       ll l, r;
       if(k % 2 == 1){
              r = k / 2;
              l = (k / 2) + 1;
       }
       if(k % 2 == 0){
              l = k / 2;
              r = k / 2;
       }
       int mn;
       ll res = 0;
       for(int i = 0; i < a.sz; i++){
              mn = min(a[i], l);
              a[i] -= mn;
              l -= mn;
       }
       for(int i = a.sz - 1; i >= 0; i--){
              mn = min(a[i], r);
              a[i] -= mn;
              r -= mn;
       }
       for(int i : a){
              if(i == 0) res++;
       }

       cout << res << endl;



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
