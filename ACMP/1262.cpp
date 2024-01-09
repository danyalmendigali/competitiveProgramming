#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0)

using namespace std;

void solve()
{
    int a, b, c, total = 0;
    cin >> a >> b >> c;
    total += a;
    int g = 240 / c;
    if(g + total > b){
        cout << b << endl;
        return;
    }
    cout << total + g << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
