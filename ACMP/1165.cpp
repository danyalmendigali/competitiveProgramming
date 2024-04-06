#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
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
    bitset<32> c(n);
    c = ~c;
    int res = static_cast<int>(c.to_ulong());
    cout << res << endl;







}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
