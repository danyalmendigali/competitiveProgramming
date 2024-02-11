#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define ios ios::sync_with_stdio(false)

using namespace std;

map<ll, ll> mp1, mp2;
set<ll> st1, st2;

void solve()
{
    mp1.clear(); st1.clear(); st2.clear();
    ll n; cin >> n;
    vector<ll> dp(n);
    ll mx = 0;
    for(int i = 0; i < n; i++){
        cin >> dp[i];
        st1[dp[i]]++;
    }
    for(int i = 0; i < n; i++){
        st2.insert(dp[i]);
        if(st2.sz == i + 1){
            break;
        }
        else{
            cout << dp[i] << " ";
            return 0;
        }
    }
    if(st2.sz == 1){
        for(int i : st2){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    for(auto i : mp1){
        st1.insert(i.S);
        if(i.S >= mx){
            mx = i.F;
        }
    }
    if(st1.sz == 1){
        cout << 0 << endl;
        return;
    }
    else{
        cout << mx << endl;
        return;
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
