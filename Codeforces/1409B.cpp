#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <algorithm>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second
#define optimus_prime ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


void solve()
{
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    int da = min(n, a - x);
    int db = min(n - da, b - y);

    long long result1 = (a - da) * 1LL * max(y, b - n);
    long long result2 = max(x, a - n) * 1LL * (b - db);
    cout << min(result1, result2) << endl;

}

signed main()
{
    optimus_prime;
    int t;
    //t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}
