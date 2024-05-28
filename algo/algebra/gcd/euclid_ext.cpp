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

int euc_ext(int a, int b, int& x, int& y)
{
       if(a == 0){
            x = 0;
            y = 1;
            return b;
       }
       int x1, y1;
       int res = euc_ext(b % a, a, x1, y1);
       x = y1 - (b / a) * x1;
       y = x1;

       return res;
}

void solve()
{
       int a, b, x, y;
       cin >> a >> b;
       int res = euc_ext(a, b, x, y);
       cout << res << " " << x << " " << y << endl;




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
