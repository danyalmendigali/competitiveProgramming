#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    int n; cin >> n;
    int res = 0;
    for (int i = n; i > 0; i >>= 1) {
        res += i & 1;
    }
    n += res;
    cout << n << endl;

}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
