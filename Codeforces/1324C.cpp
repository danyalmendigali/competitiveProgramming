#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define F first
#define S second
#define sz size()
#define pb(a) push_back(a)

void solve()
{
       string s; cin >> s;
       string new_s = "";
       new_s += 'R';
       for(int i = 0; i < s.sz; i++){
              new_s += s[i];
       }
       new_s += 'R';
       int mx = 0;
       vector<int> pos;
       for(int i = 0; i < new_s.sz; i++){
              if(new_s[i] == 'R'){
                     pos.pb(i);
              }
       }

       for(int i = 0; i < pos.sz - 1; i++){
              mx = max(mx, abs(pos[i] - pos[i + 1]));
       }
       cout << mx << endl;

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
