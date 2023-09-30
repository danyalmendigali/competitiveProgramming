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
    ll n, k;
    cin >> n >> k;
    ll res = 0;

    while(n > 0)
    {
        if(n % k == 0)
        {
             n /= k;
             res++;
        }
        else
        {
            ll res2 = n % k;
            n -= res2;
            res += res2;
        }
    }

    cout << res << endl;
}




signed main() {
    optimus_prime;

    int t;
    t = 1;
    cin >> t;

    while(t--)
        solve();




    return 0;
}
