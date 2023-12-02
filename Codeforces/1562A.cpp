#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second;
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

void solve() {
    ll l, r;
    cin >> l >> r;
    ll res = (r + 1) / 2;
    if(l > res){
        cout << r % l << endl;
    }
    else{
        cout << res - 1 << endl;
    }
}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();
}
