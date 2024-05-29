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

const ll mod = 1e9 + 7;

ll fibonacciBinet(ll n) {
    const double sqrt5 = sqrt(5.0);
    const double phi = (1.0 + sqrt5) / 2.0;
    const double psi = (1.0 - sqrt5) / 2.0;

    return round((pow(phi, n) - pow(psi, n)) / sqrt5);
}


void solve()
{
       ll n; cin >> n;
       cout << fibonacciBinet(n) << endl;



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
