#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;

void solve()
{
    int n; cin >> n;
    cout << n / 24 * 13 << " " << n / 24 * 4 << " " << n / 24 * 7 << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
