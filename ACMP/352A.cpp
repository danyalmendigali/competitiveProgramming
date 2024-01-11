#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<bool> was;
vector<int> res1, res2, comp;
set<int> st1, st2;
map<int, int> mp1, mp2;

void solve()
{
    string s = "";
    int a, b = 0, c = 0; cin >> a;
    vector<int> dp(a);
    for(int i = 0; i < a; i++){
        cin >> dp[i];
        if(dp[i] == 5){
            b++;
        }
        if(dp[i] == 0){
            c++;
        }
    }
    int g = b / 9;
    for(int i = 0; i < g * 9; i++){
        s += '5';
    }
    for(int i = 0; i < c; i++){
        s += '0';
    }
    if(c == 0){
        cout << -1 << endl;
        return;
    }
    if(g == 0 && c == 0){
        cout << -1 << endl;
        return;
    }
    if(g != 0){
         cout << s << endl;
         return;
    }
    if(g == 0 && c != 0){
        cout << 0 << endl;
        return;
    }

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
