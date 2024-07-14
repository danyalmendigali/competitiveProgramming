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
       int n, k; cin >> n >> k;
       cin.ignore();
       int l = 1, r = n;

       while(k--){
              string s;
              getline(cin, s);
              int ind = stoi(s.substr(s.find_last_of(' ') + 1));

              if(s.find("left") != string::npos){
                     r = min(r, ind - 1);
              }
              else{
                     l = max(l, ind + 1);
              }

              if(l > r){
                     cout << -1 << endl;
                     return;
              }
       }

       cout << r - l + 1 << endl;


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
