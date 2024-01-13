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

using namespace std;


void solve(){
    int n, a0 = 0, mx = 0, mn = 100000; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        if(dp[i] == 0){
            a0++;
        }
    }
    sort(dp.begin(), dp.end());
    if(a0 == dp.sz){
        cout << 0 << endl;
        return;
    }
    if(a0 != 0){
        cout << dp.sz - a0 << endl;
        return;
    }
    for(int i = 0; i < dp.sz - 1; i++){
        if(dp[i] == dp[i + 1]){
            cout << dp.sz << endl;
            return;
        }
    }
    cout << dp.sz + 1 << endl;

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
