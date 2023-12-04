#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <algorithm>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second
#define optimus_prime ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


void solve()
{
    int a; cin >> a;
    if(a % 2 == 1) cout << -1 << endl;
    else cout << 1 << " " << a / 2 << endl;
}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}
