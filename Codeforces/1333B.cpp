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
       int n; cin >> n;
       vector<int> a(n), b(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              cin >> b[i];
       }

       int cnt1 = 0, cnt2 = 0;
       bool ok1 = false, ok2 = false;
       for(int i = 0; i < a.sz; i++){
              if(a[i] < b[i] && !ok1){
                     cout << "NO" << endl;
                     return;

              }
              if(a[i] > b[i] && !ok2){
                     cout << "NO" << endl;
                     return;
              }

              if(a[i] == 1){
                     ok1 = true;
              }
              if(a[i] == -1){
                     ok2 = true;
              }
       }

       cout << "YES" << endl;


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
