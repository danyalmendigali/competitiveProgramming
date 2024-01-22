#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

map<char, int> mp1;

int binpow (int a, int n) {
	if (n == 0) return 1;
	if (n % 2 == 1) return binpow (a, n - 1) * a;
	else {
		int b = binpow (a, n / 2);
		return b * b;
	}
}

void solve()
{
    int n; cin >> n;
    ll ans = 0;
    ans = pow(2, n + 1);
    cout << ans - 2 << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
