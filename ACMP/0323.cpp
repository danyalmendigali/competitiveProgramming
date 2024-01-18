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

bool isNum(ll r, ll r2)
{
    bool ok = false;
    ll t = 0, t2 = 0;
    for(int i = 1; i <= r; i++){
        if(r % i == 0){
            t++;
        }
    }
    for(int i = 1; i <= r2; i++){
        if(r2 % i == 0){
            t2++;
        }
    }
    if(t == 2 && t2 == 2){
        ok = true;
    }
    else{
        ok = false;
    }
    return ok;
}

void solve()
{
    ll n; cin >> n;
    ll g = 0;
    for(int i = 1; i < n; i++){
        int f = i;
        int d = n - i;
        if(isNum(f, d)){
            cout << f << " " << d << endl;
            return;
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
