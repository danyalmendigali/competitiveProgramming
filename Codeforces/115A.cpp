#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

vector<pair<int, int>> p;
set<pair<int, int>> st;
set<int> st1;
vector<int> res;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdgList = vector<vector<vertex>>;

GraphAdgList g1;

void solve(){
    st.clear(); st1.clear(); res.clear();
    int n, a = 0; cin >> n;
    vector<int> dp(n);
    g1.resize(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        st1.insert(dp[i]);
    }
    cout << st1.sz << endl;



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
