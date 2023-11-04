#include <bits/stdc++.h>
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
    ll n, m; cin >> n >> m;
    vector<ll> case_dp(n);
    vector<ll> key_dp(m);
    ll a = 0, a2 = 0, b = 0, b2 = 0;
    for(ll i = 0; i < n; i++){
        cin >> case_dp[i];
        if(case_dp[i] % 2 == 0){
                a++;
        }
        if(case_dp[i] % 2 == 1){
            a2++;
        }
    }
    for(ll i = 0; i < m; i++){
        cin >> key_dp[i];
        if(key_dp[i] % 2 == 0){
            b++;
        }
        if(key_dp[i] % 2 == 1){
            b2++;
        }
    }

    ll mx = min(a, b2) + min(a2, b);
    cout << mx << endl;


}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
         solve();





    return 0;
}
