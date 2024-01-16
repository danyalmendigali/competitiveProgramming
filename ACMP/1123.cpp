#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long9
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;


void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }



}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();




    return 0;
}
