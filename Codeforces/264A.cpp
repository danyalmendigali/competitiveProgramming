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
       string s; cin >> s;
       vector<int> pos;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == 'r'){
                     pos.pb(i + 1);
              }
       }
       for(int i = s.sz; i >= 0; i--){
              if(s[i] == 'l'){
                     pos.pb(i + 1);
              }
       }
       for(int i = 0; i < pos.sz; i++){
              cout << pos[i] << endl;
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
