#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;

int binpow (int a, int n) {
	int res = 1;
	while(n) {
		if (n & 1){
            res *= a;
		}
		a *= a;
		n >>= 1;
	}
	return res;
}

void solve()
{
    ll a, b; cin >> a >> b;
    ll res = binpow(a, b);
    cout << res << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
