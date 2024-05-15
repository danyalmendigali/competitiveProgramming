#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
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

set<int> st1, st2;

void solve()
{
       ll n; cin >> n;
       ll res = 1;
       for(int i = 1; i <= n; i++){
              res *= i;
       }
       ll ans = (res / ((pow(n / 2, 2) * 2)));
       cout << ans << endl;



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
