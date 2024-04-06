#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <algorithm>
#include <iomanip>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void solve()
{
    int n; cin >> n;
    ll f = 3 * pow(2, (n - 1));
    cout << fixed << setprecision(0) << f << endl;


}

signed main()
{
    ios;
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
