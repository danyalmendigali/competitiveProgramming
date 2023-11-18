
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

set <string> st;
map<string, int> mp;
map<string, int> mp2;

void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    int mn = dp[0];
    for(int i = 0; i < n; i++){
        mn = min(mn, dp[i]);
    }
    int g = mn;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(dp[i] == g){
            ans.pb(i);
        }
    }
    int mn_2 = inf;
    for(int i = 0; i < ans.sz; i++){
        mn_2 = min(mn_2, abs(ans[i] - ans[i + 1]));
    }
    cout << mn_2 << endl;

}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}
