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
    int n; cin >> n;
    int y = 3;
    ll total = 0;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        if(dp[i] == 1){
            total += y;
            y++;
        }
        if(dp[i] == 0){
            if(y - 3 < 3){
                y = 3;
            }
            else{
                y -= 3;
            }
        }

    }
    cout << total << endl;

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
