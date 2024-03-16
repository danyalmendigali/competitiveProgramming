#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;

void solve()
{
    ll red = 0, green = 0, blue = 0, black = 0;
    ll n, m; cin >> n >> m;
    vector<ll> dp;
    vector<bool> visited(n * m, false);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            dp.pb(i * j);
        }
    }
    for(int i = 0; i < dp.sz; i++){
        if(dp[i] % 5 == 0 && !visited[i]){
           blue++;
           visited[i] = true;
        }
    }

    for(int i = 0; i < dp.sz; i++){
        if(dp[i] % 3 == 0 && !visited[i]){
           green++;
           visited[i] = true;
        }
    }

    for(int i = 0; i < dp.sz; i++){
        if(dp[i] % 2 == 0 && !visited[i]){
           red++;
           visited[i] = true;
        }
    }

    cout << "RED : " << red << endl;
    cout << "GREEN : " << green << endl;
    cout << "BLUE  : " << blue << endl;
    cout << "BLACK : " << dp.sz - (red + green + blue) << endl;


}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
