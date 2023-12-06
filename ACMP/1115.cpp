#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
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
    int a, b; cin >> a >> b;
    cout << b / a << " " << b % a << " ";
    if(b % a == 0)
    {
        cout << 0 << endl;
        return;
    }
    else{
        int h = (((b / a) + 1) * a) - b ;
        cout << h << endl;
        return;
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
}
