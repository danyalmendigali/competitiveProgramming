#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <queue>
#include <cmath>
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
       ll n; cin >> n;
       vector<ll> a(n);
       vector<ll> res1, res2;
       bool ok = false;
       ll sum1 = 0, sum2 = 0;
       ll g = 0;
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
              if(a[i] > 0){
                     sum1 += abs(a[i]);
                     res1.pb(abs(a[i]));
                     g = 1;
              }
              else{
                     sum2 += abs(a[i]);
                     res2.pb(abs(a[i]));
                     g = 2;
              }
       }

       if(sum2 > sum1){
              cout << "second" << endl;
              return;
       }
       if(sum1 > sum2){
              cout << "first" << endl;
              return;
       }
       else{
              for(int i = 0; i < res1.sz; i++){
                     if(res1[i] > res2[i]){
                            cout << "first" << endl;
                            return;
                     }
                     else if(res1[i] < res2[i]){
                            cout << "second" << endl;
                            return;
                     }
              }
              if(res1 > res2){
                     cout << "first" << endl;
                     return;
              }
              else if(res1 < res2){
                     cout << "second" << endl;
                     return;
              }
              if(a[a.sz - 1] > 0){
                     cout << "first" << endl;
                     return;
              }
              else{
                     cout << "second" << endl;
                     return;
              }
       }


}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();



       return 0;
}
