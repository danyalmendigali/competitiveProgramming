#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <cmath>
#include <stack>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const ll N = 5 * 1e5;

void solve()
{
       string s; cin >> s;
       int j = -1;
       int pos1 = -1, pos2 = -1;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '['){
                     pos1 = i;
                     break;
              }
       }

       if(pos1 == -1){
              cout << -1 << endl;
              return;
       }

       for(int i = pos1; i < s.sz; i++){
              if(s[i] == ':'){
                     pos2 = i;
                     break;
              }
       }
       if(pos2 == -1){
              cout << -1 << endl;
              return;
       }

       int pos3 = -1, pos4 = -1;

       for(int i = s.sz - 1; i > 0; i--){
              if(s[i] == ']'){
                     pos3 = i;
                     break;
              }
       }
       if(pos3 == -1){
              cout << -1 << endl;
              return;
       }
       for(int i = pos3; i > 0; i--){
              if(s[i] == ':'){
                     pos4 = i;
                     break;
              }
       }
       if(pos4 == -1){
              cout << -1 << endl;
              return;
       }

       if(pos2 == pos4){
              cout << -1 << endl;
              return;
       }

       if(pos1 >= pos3){
              cout << -1 << endl;
              return;
       }

       if(pos4 <= pos1 || pos2 >= pos3){
              cout << -1 << endl;
              return;
       }
       ll ans = 0;
       for(int i = pos2; i < pos4; i++){
              if(s[i] == '|'){
                     ans++;
              }
       }



       cout << ans + 4 << endl;



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
