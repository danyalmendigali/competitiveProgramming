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
       string s; cin >> s;
       for(char c : s){
              if(c == '0'){
                     cout << "YES" << endl;
                     cout << 0 << endl;
                     return;
              }
              if(c == '8'){
                     cout << "YES" << endl;
                     cout << 8 << endl;
                     return;
              }
       }
       for(int i = 0; i < s.sz; i++){
              for(int j = i + 1; j < s.sz; j++){
                     string h = "";
                     h += s[i];
                     h += s[j];
                     if(stoi(h) % 8 == 0){
                            cout << "YES" << endl;
                            cout << h << endl;
                            return;
                     }
              }
       }
       for(int i = 0; i < s.sz; i++){ // 3
              for(int j = i + 1; j < s.sz; j++){
                     for(int k = j + 1; k < s.sz; k++){
                            string h = "";
                            h += s[i];
                            h += s[j];
                            h += s[k];
                            if(stoi(h) % 8 == 0){
                                   cout << "YES" << endl;
                                   cout << h << endl;
                                   return;
                            }
                     }
              }
       }

       cout << "NO" << endl;



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
