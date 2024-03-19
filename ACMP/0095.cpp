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
    string s;
    cin >> s;
    ll sum = 0;
    ll g = 0;
    ll sum2 = 0;
    vector<ll> res;
    if(s.sz == 1){
        cout << s << " " << 0 << endl;
        return;
    }
    while(s.sz != 1){
            for(int i = 0; i < s.sz; i++){
                sum += s[i] - '0';
            }
            g++;
            res.pb(sum);
            s = to_string(sum);
            sum = 0;
    }
    cout << res[res.sz - 1] << " " << g << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
