#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve()
{
       ll n, c; cin >> n >> c;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       vector<ll> res(n);
       for(int i = 0; i < n; i++){
              res[i] = (i + 1) + a[i];
       }

       sort(all(res));
       ll cnt = 0, sum = 0;

       for(int i = 0; i < n; i++){
              if(sum + res[i] <= c){
                     sum += res[i];
                     cnt++;
              }
              else{
                     break;
              }
       }

       cout << cnt << endl;


}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();

       return 0;
}
