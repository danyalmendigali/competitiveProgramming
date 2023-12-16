#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;


const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

set<char> st;

void solve()
{
    st.clear();
    int n, mx = 0, f = 0; cin >> n;
    string s; cin >> s;
    int a; cin >> a;
    for(int i = 0; i < a; i++){
        char str; cin >> str;
        st.insert(str);
    }
    for(int i = 0; i < s.sz; i++){
        if(st.find(s[i]) != st.end()){
            mx = max(mx, i - f);
            f = i;
        }
    }
    cout << mx << endl;

}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
