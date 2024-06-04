#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()


void solve()
{
       string s; cin >> s;
       string s2; cin>> s2;
       if(s == s2){
              cout << 0 << endl;
              return;
       }
       int res1 = 0, res2 = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '4' && s2[i] == '7'){
                     res1++;
              }
              if(s[i] == '7' && s2[i] == '4'){
                     res2++;
              }
       }
       cout << abs(res1 - res2) + min(res1, res2) << endl;


}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}
