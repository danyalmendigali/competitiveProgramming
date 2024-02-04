#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <stack>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;


void solve()
{
    int x, p, y, cnt = 0; cin >> x >> p >> y;
    x = x * 100;
    y = y * 100;
    p = p + 100;
    while (x < y)
    {
        x = (x * p) / 100;
        cnt++;
    }
    cout << cnt << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)  solve();


    return 0;
}
