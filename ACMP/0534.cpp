#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
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

void solve(){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> dp(n);
    pair<int, int> p2[n + 9];
    int g2 = 0;
    for(int i = 1; i <= n; i++){
        cin >> dp[i];
        p2[g2].F = i;
        p2[g2].S = dp[i];
        g2++;

    }
    vector<string> res;
    int m; cin >> m;
    vector<int> dp2(m);
    for(int i = 0; i < m; i++){
        cin >> dp2[i];
        mp[dp2[i]]++;
    }
    pair<int, int> p[n + 9];
    int g = 0;
    for(pair<int, int> i : mp){
        p[g].F = i.F;
        p[g].S = i.S;
        g++;
    }

    for(int i = 0; i < g2; i++){
            if(p[i].F == p2[i].F){
                if(p[i].S <= p2[i].S){
                    cout << "no" << endl;
                }
                else{
                    cout << "yes" << endl;
                }
            }
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
