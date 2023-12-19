#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <unordered_map>

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

unordered_map <char, ll> mp;

void solve()
{
    mp.clear();
    int n, res = 0; cin >> n;
    string s; cin >>    s;
    for(char i : s){
        mp[i]++;
    }
    for(auto i : mp){
        if(i.S >= i.F + 1 - 'A'){
            res++;
        }
    }

    cout << res << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();




    return 0;
}
