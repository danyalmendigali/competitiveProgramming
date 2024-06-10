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

set<pair<char, char>> st;

void solve()
{
       st.clear();
       int n; cin >> n;
       string s; cin >> s;
       if(s.sz == 1){
              cout << "NO" << endl;
              return;
       }
       for(int i = 0; i <= s.sz - 2; i++){
              pair<char, char> a = {s[i], s[i + 1]};
              if(st.find(a) != st.end()){
                     cout << "YES" << endl;
                     return;
              }
              if(i > 0) st.insert({s[i - 1], s[i]});
       }
       cout << "NO" << endl;






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
