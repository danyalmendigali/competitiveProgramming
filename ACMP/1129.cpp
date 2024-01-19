#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

void solve()
{
    double x, p, y; cin >> x >> p >> y;
    int res = 0;
    while(x < y){
        double f = x * (p / 100);
        x += f;
        res++;
        if(x >= y){
            cout << res << endl;
            return;
        }

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
