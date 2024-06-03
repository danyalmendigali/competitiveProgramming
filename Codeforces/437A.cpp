#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve()
{
       string a, b, c, d;
       cin >> a >> b >> c >> d;
       int a_size = a.sz - 2;
       int b_size = b.sz - 2;
       int c_size = c.sz - 2;
       int d_size = d.sz - 2;
       int mn = min(a_size, min(b_size, min(c_size, d_size)));
       int mx = max(a_size, max(b_size, max(c_size, d_size)));

       int mn_a = min(b_size, min(c_size, d_size));
       int mn_b = min(a_size, min(c_size, d_size));
       int mn_c = min(a_size, min(b_size, d_size));
       int mn_d = min(a_size, min(b_size, c_size));

       int mx_a = max(b_size, max(c_size, d_size));
       int mx_b = max(a_size, max(c_size, d_size));
       int mx_c = max(a_size, max(b_size, d_size));
       int mx_d = max(a_size, max(b_size, c_size));

       int res = 0;
       char str = '0';
       if(a_size >= mx_a * 2 || a_size * 2 <= mn_a){
              res++;
              str = 'A';
       }
       if(b_size >= mx_b * 2 || b_size * 2 <= mn_b){
              res++;
              str = 'B';
       }
       if(c_size >= mx_c * 2 || c_size * 2 <= mn_c){
              res++;
              str = 'C';
       }
       if(d_size >= mx_d * 2 || d_size * 2 <= mn_d){
              res++;
              str = 'D';
       }
       if(res == 1){
              cout << str << endl;
              return;
       }
       cout << "C" << endl;




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
