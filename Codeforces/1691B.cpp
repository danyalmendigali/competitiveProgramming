#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <cmath>
#include <iomanip>
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
       int n; cin >> n;
       vector<int> a(n);
       set<int> st;
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
              st.insert(a[i]);
       }
       if(st.sz != 1){
              cout << -1 << endl;
              return;
       }
       else{
              vector<int> res(a.sz);
              iota(all(res), 1);
              if(a.sz % 2 == 0)
              {
                     for(int i = res.sz - 1; i >= 0; i--){
                            cout << res[i] << " ";
                     }
                     cout << endl;
                     return;
              }
              else{
                     reverse(all(res));
                     swap(res[res.sz / 2], res[res.sz - 1]);
                     for(int i = 0; i < res.sz; i++){
                            cout << res[i] << " ";
                     }
                     cout << endl;

              }
       }



}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
