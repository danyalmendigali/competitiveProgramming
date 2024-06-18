#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
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
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


void solve()
{

       int n, m; cin >> n >> m;
       vector<int> a(n);
       map<int, int> mp;
       for(int i = 0; i < n; i++){
              cin >> a[i];
              mp[a[i]] = i;
       }


       while(m--){
              int l, r, x;
              cin >> l >> r >> x;
              l--; r--; x--;
              int cnt = 0;
              for(int i = l; i <= r; i++){
                     if(a[i] < a[x]){
                            cnt++;
                     }
              }

              int pos = l + cnt;

              if(pos == x){
                     cout << "Yes" << endl;
              }
              else{
                     cout << "No" << endl;
              }
       }



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
