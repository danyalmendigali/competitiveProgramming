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
       int mn = 1e9;
       int g = s.sz;
       int pos1 = -1, pos2 = -1;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '>'){
                     pos1 = i;
                     mn = min(mn, pos1);
                     break;
              }
       }
       for(int i = s.sz - 1; i >= 0; i--){
              if(s[i] == '<'){
                     pos2 = i;
                     mn = min(mn, g - 1 - i);
                     break;
              }
       }
       cout << mn << endl;


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
