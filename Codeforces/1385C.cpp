#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <iomanip>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

using namespace std;

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       int res = 0;
       bool ok = false;
       for(int i = a.sz - 2; i >= 0; i--){
              if(a[i] > a[i + 1] && ok){
                     res = i + 1;
                     break;
              }
              if(a[i] < a[i + 1]) ok = true;
       }

       cout << res << endl;



}

signed main()
{
       int t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
