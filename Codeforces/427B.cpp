#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;


const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

set<char> st;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> dp(a);
    ll ans = 0, res = 0;
    for(int i = 0; i < a; i++){
        cin >> dp[i];
        if(dp[i] <= b){
            ans++;
        }
        else ans = 0;

        if(ans >= c){
            res++;
        }
    }
    cout << res << endl;



    /*
    for(int i = 0; i < a - c + 1; i++){
         ll l = i;
         ll r = i + c - 1;
         ll res = 0;
         for(int j = l; j <= r; j++){
            if(dp[j] <= b){
                res++;
            }
                if(j == r){
                    if(res == c){
                        ans++;
                    }
                }
         }
    }
    cout << ans << endl;
    */


}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
