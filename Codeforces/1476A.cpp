#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
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

set<int> st1, st2;

void solve()
{
       ll n, k; cin >> n >> k;
       if(n == k){
              cout << 1 << endl;
              return;
       }
       if(n < k){
              if(k % n != 0){
                     cout << (k / n) + 1 << endl;
                     return;
              }
              else{
                     cout << k / n << endl;
                     return;
              }
       }
       else{
              int r = n / k;
              if(n % k != 0){
                     r++;
              }
              k *= r;
              int res1 = k / n;
              int res2 = k % n;
              if(res2 != 0) res1++;
              cout << res1 << endl;
              return;
       }


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
