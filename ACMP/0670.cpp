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
    int n;
    cin >> n;
    vector<int> dp;
    for(int i = 0; i < 100000; i++){
        string s = to_string(i);
        if(s.sz == 1){
            dp.pb(i);
        }
        if(s.sz == 2){
            set<int> digits;
            digits.insert(s.begin(), s.end());
            if (digits.size() == s.sz) {
                dp.pb(i);
            }
        }
        if(s.sz == 3){
            set<int> digits;
            digits.insert(s.begin(), s.end());
            if (digits.size() == s.sz) {
                dp.pb(i);
            }
        }
        if(s.sz == 4){
            set<int> digits;
            digits.insert(s.begin(), s.end());
            if (digits.size() == s.sz) {
                dp.pb(i);
            }
        }
        if(s.sz == 5){
            set<int> digits;
            digits.insert(s.begin(), s.end());
            if (digits.size() == s.sz) {
                dp.pb(i);
            }
        }
        if(s.sz == 6){
            set<int> digits;
            digits.insert(s.begin(), s.end());
            if (digits.size() == s.sz) {
                dp.pb(i);
            }
        }
    }
    cout << dp[n] << endl;
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
