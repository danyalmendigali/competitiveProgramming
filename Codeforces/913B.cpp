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
vector<int> res, res1, comp;
vector<bool> was;
map<int, int> mp;

using vertex = int;
using Edge = vector<vertex>;
using GraphAdjList = vector<vector<vertex>>;
using GraphPair = vector<pair<vertex, vertex>>;

GraphAdjList g1;
GraphPair g2;


void solve()
{
    mp.clear();
    int n, a = 0;
    cin >> n;
    pair<int, int> p[n + 9];
    vector<int> dp(n - 1);
    for(int i = 0; i < n - 1; i++){
        cin >> dp[i];
        mp[dp[i]]++;
    }
    int k = 0;
    for(auto i : mp){
        p[k].F = i.F;
        p[k].S = i.S;
        k++;
    }
    for(int i = 0; i < k; i++){
        cout << p[i].F << " " << p[i].S << endl;
    }



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
