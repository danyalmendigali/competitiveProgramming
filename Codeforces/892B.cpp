#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       ll n; cin >> n;
       vector<ll> a(n);
       for(ll i = 0; i < n; i++){
              cin >> a[i];
       }

       vector<ll> g(n + 1, 0);
       for(ll i = 0; i < n; i++){
              if(a[i] > 0){
                     ll l = max(0LL, i - a[i]);
                     g[l]++;
                     g[i]--;
              }
       }

       ll cnt = 0;
       ll kill = 0;
       for(ll i = 0; i < n; i++){
              kill += g[i];
              if(kill == 0){
                     cnt++;
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
