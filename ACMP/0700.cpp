#include <iostream>
#include <vector>
#include <string>
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
    ll a, b, c; cin >> a >> b >> c;
    vector<ll> dp;
    ll sum = 0;
    dp.pb(b);
    int g = 0;
    for(int i = 0; i < a; i++){
        dp.pb(b - c);
        b -= c;
    }
    for(int i = 0; i < dp.sz; i++){
        if(dp[i] >= 0){
            sum += dp[i];
        }
        if(dp[i] < 0){
            g++;
        }
    }
    if(!g){
        cout << "YES ";
    }
    else{
        cout << "NO ";
    }
    cout << sum << endl;

}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
