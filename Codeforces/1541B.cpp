#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end();

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve()
{
    ll n, res = 0; cin >> n;
    ll dp[n + 1];
    for(int i = 0; i < n; i++){
        cin >> dp[i + 1];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = dp[i] - i; j <= n; j += dp[i]){
            if(j >= 0 && i < j && dp[i] * dp[j] == i + j){
                res++;
            }
        }
    }

    cout << res << endl;

}

signed main()
{
    int t;
    //t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
