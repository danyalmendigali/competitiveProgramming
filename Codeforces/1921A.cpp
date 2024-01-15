#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begi(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

set<int> st1, st2;

void solve()
{
    int x[4], y[4];
    for (int i = 0; i < 4; ++i) {
        cin >> x[i] >> y[i];
    }

    int minX = *min_element(x, x + 4);
    int maxX = *max_element(x, x + 4);
    int minY = *min_element(y, y + 4);
    int maxY = *max_element(y, y + 4);

    int side = max(maxX - minX, maxY - minY);
    int res = side * side;
    cout << res << endl;




}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
