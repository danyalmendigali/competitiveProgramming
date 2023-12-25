#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define S second
#define F first
#define sz size()
#define pb(a) push_back(a)
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0)'; cout.tie(0);

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

void solve()
{
    ll a, b, c, d, x, y, x1, y1, x2, y2;
    cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
    int finalX = x + b - a;
    int finalY = y + d - c;

    if ((finalX >= x1 && finalX <= x2) && (finalY >= y1 && finalY <= y2) && (x1 < x2 || a + b == 0) && (y1 < y2 || c + d == 0)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
