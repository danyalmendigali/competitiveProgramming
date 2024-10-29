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
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       int tot = 1 << n;
       for(int i = 0; i < tot; i++){
              string new_s(n, ' ');
              int sum = 0;
              for(int j = 0; j < n; j++){
                     if(i & (1 << j)){
                            sum += a[j];
                     }
                     else{
                            sum -= a[j];
                     }
              }
              if(sum % 360 == 0){
                     cout << "YES" << endl;
                     return;
              }
       }
       cout << "NO" << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
