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

void solve()
{
    vector<int> dp;
    vector<int> res;
    int n;
    while(n != 0){
        cin >> n;
        dp.pb(n);
    }
    dp.erase(dp.end() - 1);
    int sum = 0;
    if(dp.sz <= 2){
        cout << 0 << endl;
        return;
    }
    for(int i = 1; i < dp.sz - 1; i++){
        if(dp[i] > dp[i - 1] && dp[i] > dp[i + 1]){
            sum++;
        }
    }
    cout << sum << endl;

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
