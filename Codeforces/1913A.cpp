#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


void solve()
{
    string s, s2 = " ", s3 = " ";
    cin >> s;
    vector<int> dp;
    for(int i = 0; i < s.sz; i++){
        if(s[i] != '0'){
            dp.pb(i);
        }
    }
    if(dp.sz == 0 || dp.sz == 1){
        cout << -1 << endl;
        return;
    }
    for(int i = dp[0]; i < dp[1]; i++){
        s2 += s[i];
    }
    for(int i = dp[1]; i <= s.sz - 1; i++){
        s3 += s[i];
    }
    int r1 = stoi(s2);
    int r2 = stoi(s3);
    if(r1 < r2){
        cout << r1 << " " << r2 << endl;
    }
    else{
        cout << -1 << endl;
    }



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
