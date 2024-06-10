#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


void Mendigali_Daniyal()
{
       ll n, m; cin >> n >> m;
       vector<ll> a(n);
       ll sum = 0;
       for(ll i = 0; i < n; i++){
              cin >> a[i];
              sum += a[i];
       }

       ll last_set = 0;
       ll last_ok = -1;

       while(m--){
                int t; cin >> t;
                if(t == 1){
                     int i; ll x;
                     cin >> i >> x;
                     i--;
                     if(last_ok != -1){
                            sum = last_ok * n;
                            for(int j = 0; j < n; j++){
                                   a[j] = last_ok;
                            }
                            last_ok = -1;
                     }
                     sum -= a[i];
                     a[i] = x;
                     sum += a[i];
                }
                if(t == 2){
                     ll x; cin >> x;
                     last_ok = x;
                     last_set = x * n;
                     sum = last_set;
                }
                cout << sum << endl;

       }



}

signed main()
{
       mendigali;
       int t;
       t = 1;
       //cin >> t;
       while(t--) Mendigali_Daniyal();

       return 0;
}
