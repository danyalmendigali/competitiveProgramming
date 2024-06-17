#include <iostream>
#include <string>
#include <vector>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n; cin >> n;
       string s; cin >> s;
       vector<int> res(n);

       ll ans = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == 'L'){
                     ans += i;
                     res[i] = n - 1 - i - i;
              }
              else{
                     ans += (n - 1 - i);
                     res[i] = i - (n - 1 - i);
              }
       }

       sort(all(res));
       reverse(all(res));

       for(int i = 0; i < res.sz; i++){
              if(res[i] > 0){
                     ans += res[i];
              }
              cout << ans << " ";
       }
       cout << endl;


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
