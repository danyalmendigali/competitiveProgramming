
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve()
{
       int n; cin >> n;
       string s; cin >> s;
       int res1 = 0, res2 = 0;
       string s2 = s;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '0'){
                     res2++;
              }
              else{
                     break;
              }
       }
       reverse(all(s2));
       for(int i = 0; i < s2.sz; i++){
              if(s2[i] == '1'){
                     res1++;
              }
              else{
                     break;
              }
       }
       if(res2 + res1 == s.sz){
              cout << s << endl;
              return;
       }
       string ans = "";
       for(int i = 0; i < res2; i++){
              ans += '0';
       }
       ans += '0';
       for(int i = 0; i < res1; i++){
              ans += '1';
       }
       cout << ans << endl;


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
