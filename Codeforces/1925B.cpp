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


void solve()
{
       int x, n;  cin >> x >> n;
       int mx = 0;
       for(int i = 1; i * i <= x; i++){
              if(x % i == 0){
                     if(n <= x / i){
                            mx = max(mx, i);
                     }
                     if(n <= i){
                            mx = max(mx, x / i);
                     }
              }
       }

       cout << mx << endl;
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
