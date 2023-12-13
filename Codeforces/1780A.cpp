#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    vector<int> res, res2;
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        if(dp[i] % 2 == 1){
            res.pb(i + 1);
        }
        if(dp[i] % 2 == 0){
            res2.pb(i + 1);
        }
    }

    if(res.sz >= 3){
        cout << "YES" << endl;
        for(int i = 0; i < 3; i++){
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }
    if(res.sz >= 1 && res2.sz >= 2){
        cout << "YES" << endl;
        for(int i = 0; i < 2; i++){
            cout << res2[i] << " ";
        }
        for(int i = 0; i < 1; i++){
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
