#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

void solve()
{
       int n, res = 0; cin >> n;
       vector<pair<int, int>> a(n);


       vector<int> res1, res2;
       vector<int> a1, b1;
       for(int i = 0; i < a.sz; i++){
              cin >> a[i].F >> a[i].S;
              a1.pb(a[i].F);
              b1.pb(a[i].S);
              if(a[i].F < a[i].S){
                     res++;
              }
       }
       res1.pb(a[0].F - 0);
       res2.pb(a[0].S - 0);
       for(int i = 0; i < n - 1; i++){
              res1.pb(a[i + 1].F - a[i].F);
       }
       for(int i = 0; i < n - 1; i++){
              res2.pb(a[i + 1].S - a[i].S);
       }
       int res4 = 0;
       for(int i = 0; i < res1.sz; i++){
              if(res1[i] < res2[i]){
                     res4++;
              }
       }

       if(res4 != 0){
              cout << "NO" << endl;
              return;
       }


       if(res != 0){
              cout << "NO" << endl;
              return;
       }
       vector<int> a1_cop = a1;
       vector<int> b1_cop = b1;
       sort(all(a1_cop));
       sort(all(b1_cop));
       if(a1 == a1_cop && b1 == b1_cop){
              cout << "YES" << endl;
              return;
       }
       else{
              cout << "NO" << endl;
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
