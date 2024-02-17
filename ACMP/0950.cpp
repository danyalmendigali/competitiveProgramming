#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;

string str = "abcdefghijklmnopqrstuvwxyz";

void solve()
{
    vector<int> res;
    vector<int> res2;
    string ch = "";
    string s; cin >> s;
    for(int i = 0; i < s.sz; i++){
        if(s[i] == '1'){
            res.pb(i);
        }
    }
    res2.pb(res[0] - 0);
    for(int i = 0; i < res.sz - 1; i++){
        res2.pb(abs(res[i + 1] - res[i]) - 1);
    }
    for(int i = 0; i < res2.sz; i++){
        ch += str[res2[i]];
    }
    cout << ch << endl;




}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
