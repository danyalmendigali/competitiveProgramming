#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n, x; cin >> n >> x;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<int> pref(n);

       sort(all(a));
       reverse(all(a));

       pref[0] = a[0];
       for(int i = 1; i < n; i++){
              pref[i] = pref[i - 1] + a[i];
       }

       for(int i = pref.sz - 1; i >= 0; i--){
              if(pref[i] / (i + 1) >= x){
                     cout << i + 1 << endl;
                     return;
              }
       }
       cout << 0 << endl;
}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
