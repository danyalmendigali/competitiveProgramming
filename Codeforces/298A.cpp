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
       string s; cin >> s;
       int r = 0, l = 0;

       for(int i = 0; i < s.sz; i++){
              if(s[i] == 'R'){
                     r++;
              }
              if(s[i] == 'L'){
                     l++;
              }
       }

       if(l != 0 && r != 0){
              int pos1 = -1, pos2 = -1;
              for(int i = 0; i < s.sz; i++){
                     if(s[i] == 'R'){
                            pos1 = i + 1;
                            break;
                     }
              }

              for(int i = 0; i < s.sz; i++){
                     if(s[i] == 'L'){
                            pos2 = i + 1;
                            break;
                     }
              }

              cout << pos1 << " " << pos2 << endl;
              return;
       }

       if(r >= 2 && l == 0){
              for(int i = s.sz - 1; i > 0; i--){
                     if(s[i] == 'R' && s[i - 1] == 'R'){
                            cout << i + 1 <<  " " << i + 2 << endl;
                            return;
                     }
              }
       }

       if(l >= 0 && r == 0){
              int pos1 = -1, pos2 = -1;
              for(int i = s.sz - 1; i > 0; i--){
                     if(s[i] == 'L'){
                            pos1 = i + 1;
                            break;
                     }
              }

              for(int i = 0; i < s.sz; i++){
                     if(s[i] == 'L'){
                            pos2 = i + 1;
                            break;
                     }
              }

              cout << pos1 << " " << pos2 - 1 << endl;
              return;
       }

       if(r == 1){
              int pos1 = -1;
              for(int i = 0; i < s.sz; i++){
                     if(s[i] == 'R'){
                            pos1 = i + 1;
                     }
              }

              cout << pos1 << " " << pos1 + 1 << endl;
              return;
       }
       if(l == 1){
              int pos2 = -1;
              for(int i = 0; i < s.sz; i++){
                     if(s[i] == 'L'){
                            pos2 = i + 1;
                     }
              }

              cout << pos2 << " " << pos2 - 1 << endl;
              return;
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
