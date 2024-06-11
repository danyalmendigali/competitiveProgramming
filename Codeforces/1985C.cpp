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
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void Daniyal_Mendigali()
{
       int n; cin >> n;
       vector<ll> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       ll sum = 0;
       ll res = 0;
       ll mx = -1e9;
       for(int i = 0; i < n; i++){
              sum += a[i];
              mx = max(mx, a[i]);

              if(sum - mx == mx){
                     res++;
              }
       }
       cout << res << endl;

}

signed main()
{
       mendigali;
       int t;
       t = 1;
       cin >> t;
       while(t--) Daniyal_Mendigali();

       return 0;
}
