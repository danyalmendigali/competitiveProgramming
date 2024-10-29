#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()


const ll INF = 1e9 + 9;


void solve()
{
       int n, m, k; cin >> n >> m >> k;
       vector<int> a(m + 1);
       for(int i = 0; i < m + 1; i++){
              cin >> a[i];
       }
       ll cnt = 0, res = 0;

       for(int i = 0; i < m; i++){
              ll num = a[i] ^ a[m];
              cnt = 0;
              for(int j = 0; j < n; j++){
                     if(num & 1){
                            cnt++;
                     }
                     num >>= 1;
              }

              if(cnt <= k){
                     res++;
              }
       }


       cout << res << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
