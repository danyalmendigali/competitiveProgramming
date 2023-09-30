#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(vec) vec.begin(), vec.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll unsigned long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;
const int N = 1;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> dp(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> dp[i];
    }

    sort(all(dp));
    int f;

    if(n % 2 != 0)
    {
        f = n / 2 + 1;
    }
    if(n % 2 == 0)
    {
        f = n / 2;
    }

    cout << dp[f - 1] << endl;



}




signed main() {
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
        solve();




    return 0;
}
