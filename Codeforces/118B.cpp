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
       int r = (2 * n) + 1;

       vector<string> s(r);
       for(int i = 0; i <= n; i++){
              string row = "";
              for(int j = 0; j < n - i; j++){
                     row += "  ";
              }
              for(int j = 0; j <= i; j++){
                     row += to_string(j);
                     if(j < i) row += " ";
              }
              for(int j = i - 1; j >= 0; j--){
                     row += " " + to_string(j);
              }
              s[i] = row;
              s[r - i - 1] = row;
       }


       for(string str : s){
              cout << str << endl;
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
