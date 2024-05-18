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

void solve()
{
       int n; cin >> n;
       string s; cin >> s;
       int res = 0;
       int skobOpen = 0, skobClose = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '('){
                     skobOpen++;
              }
              if(s[i] == ')'){
                     if(skobOpen != 0){
                            skobOpen--;
                     }
                     else{
                            res++;
                     }
              }
       }
       cout << res << endl;

}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
