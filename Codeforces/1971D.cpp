#include <iostream>
#include <string>
#include <vector>
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
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie()

void solve()
{
       set<char> str;
       string s; cin >> s;

       int ans = 0;
       for(int i = 0; i < s.sz - 1; i++){
              if(s[i] == '0' && s[i + 1] == '1'){
                     ans++;
              }
       }
       s.erase(unique(all(s)), s.end());
       if(ans != 0){
              cout << s.sz - 1 << endl;
       }
       else{
              cout << s.sz << endl;
       }






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
