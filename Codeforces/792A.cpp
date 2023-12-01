#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false)

using namespace std;


const ll inf = 1e9 + 9;
const ll INF = 1e15 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    sort(all(dp));
    ll mn = INF;
    for(ll i = 0; i < dp.sz; i++){
        mn = min(mn, abs(dp[i] - dp[i + 1]));
    }
    ll a = 0;
    for(int i = 0; i < dp.sz - 1; i++){
        if(dp[i + 1] - dp[i] == mn){
            a++;
        }
    }

    cout << mn << " " << a << endl;
}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    // cin >> t;

    while(t--)
        solve();



    return 0;
}
