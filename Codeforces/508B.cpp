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
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve()
{
       string s; cin >> s;
       int ans = 0;
       string str1 = s;
       string str2 = s;
       for(char c : s){
              if((c - '0') % 2 == 0){
                     ans++;
              }
       }
       if(ans == 0){
              cout << -1 << endl;
              return;
       }

       for(int i = 0; i < str1.sz; i++){
              if(((str1[i] - '0') % 2 == 0) && (str1[i] - '0') < (str1[str1.sz - 1] - '0')){
                     swap(str1[i], str1[str1.sz - 1]);
                     cout << str1 << endl;
                     return;
              }
       }


       for(int i = str2.sz - 1; i >= 0; i--){
              if((str2[i] - '0') % 2 == 0 && (str1[i] - '0') < (str1[str1.sz - 1])){
                     swap(str2[str2.sz - 1], str2[i]);
                     cout << str2 << endl;
                     return;
              }
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
