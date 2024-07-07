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
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       vector<int> path;
       path.pb(1);
       for(int i = 1; i < n - 1; i++){
              if(abs(a[i] - a[i - 1]) < abs(a[i] - a[i + 1])){
                     path.pb(-1);
              }
              else{
                     path.pb(1);
              }
       }
       path.pb(-1);

       vector<int> pref1(n), pref2(n);
       pref1[0] = 0;
       int ind = 0;
       for(int i = 1; i < path.sz; i++){
              if(path[i - 1] == 1){
                     pref1[i] = pref1[i - 1] + 1;
                     ind++;
              }
              if(path[i - 1] == -1){
                     pref1[i] = pref1[i - 1] + (a[ind + 1] - a[ind]);
                     ind++;
              }
       }

       reverse(all(path));
       reverse(all(a));
       int ind2 = 0;
       for(int i = 1; i < path.sz; i++){
              if(path[i - 1] == -1){
                     pref2[i] = pref2[i - 1] + 1;
                     ind2++;
              }
              if(path[i - 1] == 1){
                     pref2[i] = pref2[i - 1] + (a[ind2] - a[ind2 + 1]);
                     ind2++;
              }
       }
       reverse(all(pref2));

       int m; cin >> m;
       while(m--){
              int x, y; cin >> x >> y;
              x--; y--;
              if(x < y){
                     cout << abs(pref1[y] - pref1[x]) << endl;
              }
              else{
                     cout << abs(pref2[y] - pref2[x]) << endl;
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
