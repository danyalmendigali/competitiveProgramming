#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    pair<int, int> p[n];
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        p[i].F = i + 1;
        p[i].S = dp[i];
    }
    int m; cin >> m;
    map<int, int> mp1;
    vector<int> dp2(m);
    for(int i = 0; i < m; i++){
        cin >> dp2[i];
        mp1[dp2[i]]++;
    }
    vector<int> h;
    for(pair<int, int> i : mp1){
        for(int j = 0; j < n; j++){
            if(p[j].F == i.F){
                if(p[j].S >= i.S){
                    cout << "no" << endl;
                }
                else{
                    cout << "yes" << endl;
                }
            }
        }
    }


}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
