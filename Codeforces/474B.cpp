#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
#include <map>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using namespace std;


void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    vector<int> res(n + 1, 0);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        res[i + 1] = res[i] + dp[i];
    }

    int g;
    cin >> g;
    vector<int> dp2(g);
    for(int i = 0; i < g; i++){
        cin >> dp2[i];
        int l = 0, r = n - 1;
        while(l < r){
            int md = l + (r - l) / 2;
            if(dp2[i] > res[md + 1  ]){
                l = md + 1;
            }
            else{
                r = md;
            }
        }
         cout << l + 1 << endl;
    }


    /*
    ll a;
    cin >> a;
    vector<ll> dp(a), ans;
    pair<ll, ll> p[a + 9];
    for(int i = 0; i < a; i++){
        cin >> dp[i];
    }



    ll res = dp[0];
    for(int i = 0; i < a; i++){
        ans.pb(res);
        res += dp[i + 1];
    }

    ll n; cin >> n;
    vector<ll> dp2(n);
    for(ll i = 0; i < n; i++){
        cin >> dp2[i];
        if(dp2[i] >= 0 && dp2[i] <= ans[0]){
            cout << 1 << endl;
        }
        if(dp2[i] >= ans[ans.sz - 1]){
            cout << ans.sz << endl;
        }
        else{
            for(int j = 0; j < ans.sz; j++){
                if(dp2[i] >= ans[j] && dp2[i] <= ans[j + 1]){
                    cout << j + 2 << endl;
                }
            }
        }
    }



    p[0].F = 1;
    p[0].S = ans[0];

    for(int i = 0; i < ans.sz; i++){
        p[i + 1].F = ans[i] + 1;
        p[i + 1].S = ans[i + 1];
    }
    ll n; cin >> n;
    vector<ll> dp2(n);
    for(int i = 0; i < n; i++){
        cin >> dp2[i];
        for(int j = 0; j < a; j++){
            if(p[j].F <= dp2[i] && p[j].S >= dp2[i]){
                cout << j + 1 << endl;
            }
        }
    }
    */


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();




    return 0;
}
