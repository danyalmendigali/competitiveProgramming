#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()

using namespace std;

vector<pair<int, int>> p;
set<pair<int, int>> st;
set<int> st1;
vector<int> res;

void solve(){
    st.clear(); st1.clear(); res.clear();
    int n, s;
    cin >> n >> s;
    p.resize(n);
    for(int i = 0; i < n; i++){
        cin >> p[i].F >> p[i].S;
        if(p[i].F == s && p[i].S == 0){
            res.pb(p[i].S);
        }
        if(p[i].F < s && p[i].S == 0){
            res.pb(0);
        }
        if(p[i].F < s && p[i].S != 0){
            ///st.insert({p[i].F, p[i].S});
            res.pb(100 - p[i].S);
        }
    }
    sort(all(res));
    if(res.sz == 0){
        cout << -1 << endl;
        return;
    }

    cout << res[res.sz - 1] << " ";





}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
