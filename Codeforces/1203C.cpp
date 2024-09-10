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

ll gcd(ll a, ll b) {
    while(b){
        a %= b;
        swap(a, b);
    }
    return a;
}



void solve()
{
       ll n; cin >> n;
       vector<ll> a(n), ans;
       ll res2 = 0;
       ll mx = 0;
       for(ll i = 0; i < a.sz; i++){
              cin >> a[i];
       }


       ll cm_gcd = a[0];
       for(ll i = 0; i < n; i++){
              cm_gcd = gcd(cm_gcd, a[i]);
       }

       cout << cm_gcd << endl;

       ll cnt = 0;
       for(ll i = 1; i * i <= cm_gcd; i++){
              if(cm_gcd % i == 0){
                     cnt++;
                     if(i != cm_gcd / i) cnt++;
              }
       }

       cout << cnt << endl;

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
