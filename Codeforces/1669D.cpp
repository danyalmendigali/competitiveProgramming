#include <iostream>
#include <vector>
#include <string>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve()
{
       int n; cin >> n;
       vector<int> pos;
       string s; cin >> s;
       pos.pb(0);
       if(s.sz == 1 && s[0] == 'W'){
              cout << "YES" << endl;
              return;
       }
       if(s.sz == 1){
              cout << "NO" << endl;
              return;
       }
       int h = count(all(s), 'W');
       if(h == s.sz){
              cout << "YES" << endl;
              return;
       }
       for(int i = 0; i < s.sz; i++){
              if(s[i] == 'W'){
                     pos.pb(i);
              }
              if(i != 0 && i != s.sz - 1){
                     if(s[i] == 'W' && (s[i + 1] == 'B' || s[i + 1] == 'R') && s[i + 2] == 'W'){
                            cout << "NO" << endl;
                            return;
                     }
              }
              if(i == 0){
                     if((s[i] == 'B' || s[i] == 'R') & s[i + 1] == 'W'){
                            cout << "NO" << endl;
                            return;
                     }
              }
              if(i == s.sz - 1){
                     if((s[s.sz - 1] == 'B' || s[s.sz - 1] == 'R') & s[s.sz - 2] == 'W'){
                            cout << "NO" << endl;
                            return;
                     }
              }
       }

       // RBWWWRBRBBBBRBBBBRR
       pos.pb(s.sz - 1);
       int cnt = 0;
       for(int i = 0; i < pos.sz - 1; i++){
              int pos1 = pos[i];
              int pos2 = pos[i + 1];
              int r = 0, b = 0, w = 0;
              if(pos1 == pos2){
                     cnt++;
              }
              for(int j = pos1; j <= pos2; j++){
                     if(s[j] == 'R'){
                            r++;
                     }
                     if(s[j] == 'B'){
                            b++;
                     }
              }
              if((r == 0 && b != 0) || (r != 0 && b == 0)){
                     cout << "NO" << endl;
                     return;
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
