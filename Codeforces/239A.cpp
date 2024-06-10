#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve(){
       ll y, k, n; cin >> y >> k >> n;
       vector<ll> g;
       if(y >= n){
              cout << -1 << endl;
              return;
       }

       ll st = (y / k + 1) * k;
       if(st > n){
              cout << -1 << endl;
              return;
       }
       for(ll i = st; i <= n; i += k){
              cout << i - y << " ";
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
