#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie();

using namespace std;

ll fact(ll val)
{
    ll f = 1;
    for(int i = 1; i <= val; i++){
        f *= i;
    }
    return f;
}

void solve()
{
    int n, k; cin >> n >> k;
    cout << fact(n) / ((fact(k) * (fact(n - k))));


}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
