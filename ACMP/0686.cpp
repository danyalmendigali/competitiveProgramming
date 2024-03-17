#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    sort(dp.begin(), dp.end());
    for(int i = 0; i < n; i += 2){
        cout << dp[i] << " ";
    }
    if(n % 2 == 0){
        for(int i = n - 1; i > 0; i -= 2){
            cout << dp[i] << " ";
        }
        return;
    }
    else{
        for(int i = n - 2; i > 0; i -= 2){
            cout << dp[i] << " ";
        }
        return;
    }
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
