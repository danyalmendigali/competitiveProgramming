
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
    int n;
    cin >> n;
    vector<int> dp(n), dp2(n - 1), dp3(n - 2);
    for(int i = 0; i < n; i++) cin >> dp[i];
    for(int i = 0; i < n - 1; i++) cin >> dp2[i];
    sort(all(dp)); sort(all(dp2));
    for(int i = 0; i < dp.sz; i++){
        if(dp[i] != dp2[i]){
            cout << dp[i] << endl;
            break;
        }
        continue;
    }
    for(int i = 0; i < dp3.sz; i++){
        cin >> dp3[i];
    }
    sort(all(dp3));
    for(int i = 0; i < dp2.sz; i++){
        if(dp2[i] != dp3[i]){
            cout << dp2[i] << endl;
            break;
        }
        continue;
    }

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
