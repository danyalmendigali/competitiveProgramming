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
    int n, m; cin >> n >> m;
    set<int> st1, st2;
    vector<int> dp(n), dp2(m);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        st1.insert(dp[i]);
    }
    for(int i = 0; i < m; i++){
        cin >> dp2[i];
        st2.insert(dp2[i]);
    }
    if(st1 == st2){
        cout << "1" << endl;
        return;
    }
    cout << "0" << endl;



}
signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
