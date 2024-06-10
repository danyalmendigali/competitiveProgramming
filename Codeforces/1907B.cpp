#include <iostream>
#include <vector>
#include <string>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       string s, res = ""; cin >> s;
       vector<int> a, b;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == 'b'){
                     s[i] = ' ';
                     if(b.sz != 0){
                            s[b.back()] = ' ';
                            b.pop_back();
                     }
              }
              else if(s[i] == 'B'){
                     s[i] = ' ';
                     if(a.sz != 0){
                            s[a.back()] = ' ';
                            a.pop_back();
                     }
              }
              else if(s[i] >= 'a' && s[i] <= 'z'){
                     b.pb(i);
              }
              else{
                     a.pb(i);
              }
       }

       for(char c : s){
              if(c != ' '){
                     res += c;N
              }
       }
       cout << res << endl;


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
