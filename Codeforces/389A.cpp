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
const int f = 1000;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

void solve()
{
    int f = 1000;
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    while(f--)
    {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(dp[i] > dp[j])
                {
                    dp[i] -= dp[j];
                }
            }
        }
    }


    int sum = 0;
    for(int i = 0; i < dp.sz; i++){
        sum += dp[i];
    }
    cout << sum << endl;
}

signed main()
{
    optimus_prime;
    ll t;
    t = 1;
    //cin >> t;

    while(t--)
         solve();





    return 0;
}
