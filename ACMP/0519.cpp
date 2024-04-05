#include <iostream>
#include <vector>
#include <string>
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
    string s; cin >> s;
    vector<ll> dp;
    vector<ll> dp2;
    ll a = 0;
    for(int i = 0; i < s.sz; i++){
        char str = s[i];
        dp.pb(str - '0');
        dp2.pb(str - '0');
        if(str == '0'){
            a++;
        }
    }
    sort(all(dp));
    if(a != 0){
         swap(dp[0], dp[a]);
    }
    string s2 = "", s3 = "";
    for(int i = 0; i < dp.sz; i++){
        s2 += to_string(dp[i]);
    }
    sort(all(dp2));
    reverse(all(dp2));
    for(int i = 0; i < dp2.sz; i++){
        s3 += to_string(dp2[i]);
    }
    cout << stoi(s2) << " " << stoi(s3) << endl;

}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
