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
    int a, b, c;
    cin >> a >> b >> c;
    int g = 0;
    int res = 0;
    while(g < a){
        g += b;
        res++;
        if(g >= a){
            cout << res << endl;
            return;
        }
        g -= c;

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
