#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<bool> was;
vector<int> res1, res2, comp;
set<int> st1, st2;
map<int, int> mp1, mp2;

void solve()
{
    int n; cin >> n;
    ll sum1 = 0, sum2 = 0;
    vector<int> res1, res2;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        if(dp[i] >= 0){
            sum1 += abs(dp[i]);
            res1.pb(i + 1);
        }
        if(dp[i] < 0){
            sum2 += abs(dp[i]);
            res2.pb(i + 1);
        }
    }
    if(sum1 >= sum2){
        cout << res1.sz << endl;
        for(int i = 0; i < res1.sz; i++){
            cout << res1[i] << " ";
        }
        return;
    }
    else{
        cout << res2.sz << endl;
        for(int i = 0; i < res2.sz; i++){
            cout << res2[i] << " ";
        }
        return;
    }


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
