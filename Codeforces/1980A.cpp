#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
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


void solve()
{
       int n, m; cin >> n >> m;
       map<char, int> mp;
       string s; cin >> s;
       int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == 'A'){
                     a++;
              }
              if(s[i] == 'B'){
                     b++;
              }
              if(s[i] == 'C'){
                     c++;
              }
              if(s[i] == 'D'){
                     d++;
              }
              if(s[i] == 'E'){
                     e++;
              }
              if(s[i] == 'F'){
                     f++;
              }
              if(s[i] == 'G'){
                     g++;
              }
       }
       int res = 0;
       if(m - a >= 0){
              res += (m - a);
       }
       if(m - b >= 0){
              res += (m - b);
       }
       if(m - c >= 0){
              res += (m - c);
       }
       if(m - d >= 0){
              res += (m - d);
       }
       if(m - e >= 0){
              res += (m - e);
       }
       if(m - f >= 0){
              res += (m - f);
       }
       if(m - g >= 0){
              res += (m - g);
       }
       cout << res << endl;




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
