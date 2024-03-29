#include <iostream>
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

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

set<pair<int, int>> st;


void solve()
{
    st.clear();
    int n, m; cin >> n >> m;
    vector<pair<int, int>> dp(m);
    for(int i = 0; i < m; i++){
        cin >> dp[i].F >> dp[i].S;
        st.insert({dp[i].S, dp[i].F});
    }
    if(st.sz == m){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
