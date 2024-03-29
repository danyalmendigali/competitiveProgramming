#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;


void solve() {
    int n, m; cin >> n >> m;
    vector<string> dp(n);
    vector<int> res;
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        int h = 0;
        for(int j = 0; j < dp[i].sz; j++){
            if(dp[i][j] == '.'){
                h++;
            }
        }
        res.pb(m - (m - h));
    }
    int mn = 10000;
    for(int i = 0; i < res.sz; i++){
         mn = min(mn, res[i]);
    }
    cout << mn << endl;

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
