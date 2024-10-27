#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;


void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<int> res(a.sz);
       res[0] = -1;
       for(int i = 1; i < n; i++){
              if(a[i] == a[i - 1]){
                     res[i] = res[i - 1];
              }
              else{
                     res[i] = i - 1;
              }
       }

       int q; cin >> q;
       while(q--){
              int l, r; cin >> l >> r;
              l--; r--;
              if(res[r] - res[l] == 0){
                     cout << "-1 -1" << endl;
              }
              else{
                     cout << res[r] + 1 << " " << r + 1 << endl;
              }
       }


}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();




    return 0;
}
