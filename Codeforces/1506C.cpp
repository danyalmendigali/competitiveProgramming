#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
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
#define Fast_Code ios::sync_wtih_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       string s, string h;
       cin >> s >> h;
       int ans = 0;
       int mx = 0;
       for(int i = 0; i < s.sz; i++){
              for(int j = i + 1; j < s.sz; j++){
                     for(int k = 0; k < s2.sz; j++){
                            for(int f = k + 1; f < s2.sz; f++){
                                   if(s.substr(i, j) == s2.substr(k, f)){
                                          ans++;
                                          mx = max(mx, abs(j - i));

                                   }
                            }
                     }
              }
       }

       cout << mx << endl;

}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
