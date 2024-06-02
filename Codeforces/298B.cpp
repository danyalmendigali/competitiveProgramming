#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve(){
       int t, sx, sy, ex, ey;
       cin >> t >> sx >> sy >> ex >> ey;
       string str; cin >> str;
       int a = ex - sx;
       int b = ey - sy;
       int e = 0, s = 0, w = 0, n = 0;
       if(a > 0){
              e = abs(a);
       }
       if(b > 0){
              n = abs(b);
       }
       if(a < 0){
              w = abs(a);
       }
       if(b < 0){
              s = abs(b);
       }
       int e1 = 0, s1 = 0, w1 = 0, n1 = 0;
       for(int i = 0; i < str.sz; i++){
              if(str[i] == 'E'){
                     e1++;
              }
              if(str[i] == 'S'){
                     s1++;
              }
              if(str[i] == 'W'){
                     w1++;
              }
              if(str[i] == 'N'){
                     n1++;
              }
              if(e <= e1 && s <= s1 && w <= w1 && n <= n1){
                     cout << i + 1 << endl;
                     return;
              }
       }
       cout << -1 << endl;
}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
