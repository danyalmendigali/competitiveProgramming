#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <cmath>
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
        int a, s; cin >> a >> s;
        string s1, s2;
        s1 = to_string(a);
        s2 = to_string(s);
        reverse(all(s1));
        reverse(all(s2));
        for(int i = s1.sz; i < max(s1.sz, s2.sz); i++){
              s1 += '0';
        }

        for(int i = s2.sz; i < max(s1.sz, s2.sz); i++){
              s2 += '0';
        }

        string res;
        for(int i = 0; i < s2.sz; i++){
              if(s2[i] - '0' >= s1[i] - '0'){
                     int h = (s2[i] - '0') + (s1[i] - '0');
                     cout << h << endl;
              }
        }
        cout << res << endl;




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
