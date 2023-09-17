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
    int n;
    cin >> n;
    vector<ll> dp(n);
    for(int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    vector<ll> dp2 = dp;

    ll a = 0;

    while(a == n - 1)
    {
        ll mx = dp2[0], mn = dp2[0];
        int indexMx, indexMn;
        for(int i = 0; i < dp.sz; i++)
        {
            if(mx < dp2[i])
            {
                mx = dp2[i];
                indexMx = i;
            }
            if(mn > dp2[i])
            {
                mn = dp2[i];
                indexMn = i;
            }
        }

        dp2.erase(dp2.begin() + indexMx);
        dp2.erase(dp2.begin() + indexMn);
        a++;
    }

    for(int i = 0; i < dp2.sz; i++)
    {
        cout << dp2[i] << " ";
    }



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
