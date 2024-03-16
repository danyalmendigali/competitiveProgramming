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
    int num = 1;
    for(int i = 0; i < dp.sz; i++){
        if(dp[i] < dp[i + 1]){
            num++;
        }
        else{
            res.pb(num);
            num = 1;
        }
    }

    int num2 = 1;
    for(int i = 0; i < dp.sz; i++){
        if(dp[i] > dp[i + 1]){
            num2++;
        }
        else{
            res.pb(num2);
            num2 = 1;
        }
    }
    int mx = 0;
    for(int i = 0; i < res.sz; i++){
        mx = max(res[i], mx);
    }
    cout << mx << endl;
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
