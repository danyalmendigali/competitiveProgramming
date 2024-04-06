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
    vector<string> s;
    vector<int> dp;
    while(n >= 1){
        dp.pb(n);
        n -= 2;
    }
    int f = 0;
    for(int i = 0; i < dp.sz; i++){
        string g = "";
        for(int j = 0; j < f; j++){
            g += '.';
        }
        for(int j = 0; j < dp[i]; j++){
            g += 'A';
        }
        s.pb(g);
        f++;
    }
    reverse(all(s));
    for(int i = 0; i < s.sz; i++){
        cout << s[i] << endl;
    }


}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
