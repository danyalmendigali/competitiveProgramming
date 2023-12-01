#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false)

using namespace std;


const ll inf = 1e9 + 9;
const ll INF = 1e15 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;

void solve()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    vector<int> dp;
    int sum2 = 0;
    pair<int, int> p[a + 9];
    for(int i = 0; i < a; i++){
        cin >> p[i].F >> p[i].S;
        dp.pb(p[i].F - p[i].S);
        sum += p[i].F;
        sum2 += p[i].S;
    }
    int res = sum - b;
    if(sum2 > b){
        cout << -1 << endl;
        return;
    }
//    cout << res << endl;
//    cout << sum << endl;
//    for(int i = 0; i < dp.sz; i++){
//        cout << dp[i] << " ";
//    }
    sort(all(dp));
    reverse(all(dp));
    int num = 0;
    int i = 0;
    int g = 0;
    while(num < res){
        num += dp[i];
        i++;
        g++;
    }
    cout << g << endl;


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
