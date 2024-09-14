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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


const ll N = 1e6 + 5;
const ll INF = 1e18;


void solve()
{
        int a, b, c, m; cin >> a >> b >> c >> m;
        int mx = max({a, b, c});
        int sm = a + b + c - mx;

        int mx_p = a - 1 + b - 1 + c - 1;
        int mn_p = mx - 1 - sm;

        mn_p = max(0, mn_p);

        if(m >= mn_p && m <= mx_p){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
            return;
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
