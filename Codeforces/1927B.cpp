#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;

map<char, int> mp;

void solve() {
    int n;
    cin >> n;

    map<char, int> mp;
    char ch = 'a';
    string str = "";

    vector<int> dp(n);
    for(int i = 0; i < n; i++) {
        cin >> dp[i];
    }

    for(int i = 0; i < n; i++) {
        if(dp[i] == 0) {
            str.push_back(ch);
            mp[ch]++;
            ch++;
        } else {
            for(auto &it : mp) {
                if(it.S == dp[i]) {
                    str.push_back(it.F);
                    it.S++;
                    break;
                }
            }
        }
    }
    cout << str << endl;
}

signed main()
{
    _mendigali_;
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
