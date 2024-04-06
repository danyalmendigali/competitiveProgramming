#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

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
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    int h = 1;
    vector<pair<int, int>> p;
    for(int i = 0; i < dp.sz; i++){
        if(dp[i] == dp[i + 1]){
            h++;
        }
        if(dp[i] != dp[i + 1]){
            p.push_back({dp[i], h});
            h = 1;
        }
    }
    vector<string> s;
    for(auto i : p){
        string str = '[' + to_string(i.F) + ' ' + to_string(i.S) + ']';
        s.pb(str);
    }
    cout << s.sz << " ";
    for(int i = 0; i < s.sz; i++){
        cout << s[i] << " ";
    }






}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
