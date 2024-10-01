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

void solve()
{
       int n, k; cin >> n;
       vector<int> a(n);
       ll sum = 0;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              sum += a[i];
       }
       sort(all(a));
       ll res = a[n / 2] * 2 * n - sum + 1;
       res = max(res, 0LL);
       if(n <= 2){
              res = -1;
       }
       cout << res << endl;




}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
