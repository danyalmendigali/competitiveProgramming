#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    ll a, b; cin >> a >> b;
    vector<ll> dp(a);
    vector<ll> dp2;
    for(int i = 0; i < a; i++){
        cin >> dp[i];
        if(dp[i] % b == 0){
            dp2.pb(dp[i]);
        }
    }
    sort(all(dp2));
    if(dp2.sz == 0){
        cout << "NO" << endl;
        return;
    }

    cout << dp2[0] << " " << dp2[dp2.sz - 1] << endl;







}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
