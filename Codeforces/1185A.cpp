#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalutrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

using vertex = int;
using Edge = vector<vertex>;
using Graph = vector<pair<vertex, vertex>>;
using GraphAdjList = vector<vector<vertex>>;


void solve()
{
    vector<int> dp(3);
    int a, res = 0;
    for(int i = 0; i < dp.sz; i++){
        cin >> dp[i];
    }
    cin >> a;
    sort(dp.begin(), dp.end());
    if(dp[1] - dp[0] < a){
        res += a - (dp[1] - dp[0]);
    }
    if(dp[2] - dp[1] < a){
        res += a - (dp[2] - dp[1]);
    }
    cout << res << endl;



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
