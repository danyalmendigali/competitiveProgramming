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

void solve()
{
    string a, b, c; cin >> a >> b >> c;
    map<char, ll> mp;
    set<ll> st1, st2, st3;
    for(ll i = 0; i < a.sz; i++){
        st1.insert(a[i]);
    }
    for(ll i = 0; i < b.sz; i++){
        st2.insert(b[i]);
    }
    for(ll i = 0; i < c.sz; i++){
        st3.insert(c[i]);
    }

    for(char i : st1){
        mp[i]++;
    }
      for(char i : st2){
        mp[i]++;
    }
      for(char i : st3){
        mp[i]++;
    }
    ll g = 0;
    for(pair<char, ll> i : mp){
        if(i.S == 3){
            g++;
        }
    }
    cout << g << endl;
    for(pair<char, ll> i : mp){
        if(i.S == 3){
            cout << i.F << " ";
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
