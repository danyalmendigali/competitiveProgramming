#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(); cout.tie(0)


bool is_sort(vector<int> a)
{
       bool ok = false;
       vector<int> g;
       sort(all(g));
       if(g == a){
              bool ok = true;
       }


       return ok;
}

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       vector<int> b;
       b.pb(a[a.sz - 1]);
       for(int i = n - 2; i >= 0; i--){
              if(a[i] > b[b.sz - 1]){
                     b.pb(a[i] % 10);
                     b.pb(a[i] / 10);
              }
              else{
                     b.pb(a[i]);
              }
       }

       vector<int> g = b;
       sort(all(g));
       int ans = 0;
       for(int i = 0; i < b.sz; i++){
              if(b[i] == g[b.sz - 1 - i]){
                     ans++;
              }
       }
       if(ans == b.sz){
              cout << "YES" << endl;
              return;
       }
       cout << "NO" << endl;


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
