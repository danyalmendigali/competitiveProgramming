#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> dp(n);
    vector<ll> dp2(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    for(ll i = 0; i < n; i++)
    {
        dp2[i] = dp[i];
        if(i != n - 1)
        {
            dp2[i] += dp[i + 1];
        }
    }

    for(ll i = 0; i < dp2.sz; i++)
    {
        cout << dp2[i] << " ";
    }


}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
