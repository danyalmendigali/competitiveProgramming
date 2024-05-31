#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <set>
#include <map>
#include <unordered_set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S secondN
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)

void solve()
{
       int n, m; cin >> n >> m;
       if(m != 0){
              int res = 1;
              while(res <= n){
                     res <<= 1;
              }
              cout << res - 1 << endl;
       }
       else{
              cout << n << endl;
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
