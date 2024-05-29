#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <cmath>
#include <set>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ers() erase()
#define ins() insert()
#define lw() lower_bound()
#define up() upper_bound()
#define all(dp) dp.begin(), dp.end()

int del(int n)
{
       int res = 0;
       for(int i = 1; i <= n; i++){
              if(n % i == 0){
                     res++;
              }
       }
       return res;
}


void solve()
{
       int a, b, c; cin >> a >> b >> c;
       ll sum = 0;
       for(int i = 1; i <= a; i++){
              for(int j = 1; j <= b; j++){
                     for(int k = 1; k <= c; k++){
                            sum += del(i * j * k);
                     }
              }
       }
       cout << sum << endl;

}


signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0); cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}
