#include <iostream>
#include <vector>
#include <string>
#include <queue>
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
       int n; cin >> n;
       vector<pair<int, int>> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i].F >> a[i].S;
       }
       vector<int> ans(n, 0);
       int x = 1;
       for(int i = 0; i < a.sz; i++){
              if(x < a[i].F){
                     x = a[i].F;
              }
              if(x >= a[i].F && x <= a[i].S){
                     ans[i] = x;
                     x++;
              }
       }

       for(int i : ans){
              cout << i << " ";
       }
       cout << endl;



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
