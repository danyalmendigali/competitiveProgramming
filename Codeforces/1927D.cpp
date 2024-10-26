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
       vector<int> pref(n);

       int q; cin >> q;
       for(int i = 0; i < q; i++){
              int l, r;  cin >> l >> r;
              l--; r--;
              if(a[l] != a[r]){
                     cout << l + 1 << " " << r + 1 << endl;
              }
              else{
                     int f = -1;
                     for(int j = l + 1; j <= r; j++){
                            if(a[j] != a[l]){
                                   f = j;
                                   break;
                            }
                     }
                     if(f != -1){
                            cout << l + 1 << " " << f + 1 << endl;
                     }
                     else{
                            cout << "-1 -1" << endl;
                     }
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
