#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0);

using namespace std;

set<pair<int, int>> st1;

void solve()
{
    st1.clear();
    ll a, b, sum = 0, prob = 0;
    cin >> a >> b;
    pair<ll, ll> p[b + 9];
    for(ll i = 0; i < b; i++){
        cin >> p[i].F >> p[i].S;
        st1.insert({p[i].F, p[i].S});
        st1.insert({p[i].S, p[i].F});
        if(p[i].F == p[i].S){
            prob++;
        }
    }
    int size_st = st1.sz;

    for(ll i = a - 1; i >= 0; i--){
        sum += i;
    }
    if(sum == b && prob == 0 && size_st / 2 == b){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}

