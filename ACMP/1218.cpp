#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    int g;
    cin >> g;
    dp.pb(g);
    sort(all(dp));
    reverse(all(dp));
    int ind;
    for(int i = 0; i < dp.sz; i++){
//        cout << dp[i] << " ";
        if(dp[i] == g){
            ind = i;
        }
    }
    cout << ind + 1 << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
