
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
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

void solve()
{
       int n; cin >> n;
       string s; cin >> s;
       string ans1 = "";
       string ans2 = "";
       int h = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '2'){
                     if(h == 0)
                     {
                            ans1 += '1';
                            ans2 += '1';
                     }
                     else{
                            ans1 += '0';
                            ans2 += '2';
                     }
              }
              if(s[i] == '1'){
                     if(h == 0)
                     {
                            ans1 += '1';
                            ans2 += '0';
                            h = 1;
                     }
                     else{
                            ans1 += '0';
                            ans2 += '1';
                     }
              }
              if(s[i] == '0'){
                     ans1 += '0';
                     ans2 += '0';
              }
       }
       cout << ans1 << " " << ans2 << endl;


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
