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

int findMaxNum(ll num1, ll num2)
{
    ll mx = num2 - (num2 % num1);
    while(mx > 0){
        if(num1 % mx == 0){
            return mx;
        }
        mx -= num1;
    }
}

void solve()
{
    ll n, m; cin >> n >> m;
    if(n == m || n < m){
        cout << 1 << endl;
        return;
    }
    if(n > m){
        ll num = findMaxNum(n, m);
        cout << num << endl;
        return;
    }
}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
