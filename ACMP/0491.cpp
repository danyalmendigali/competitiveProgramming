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

bool isPal(string s)
{
    bool ok = false;
    int a = 0;
    for(int i = 0; i < s.sz; i++){
        if(s[i] == s[s.sz - i - 1]){
            a++;
        }
    }
    if(a == s.sz){
        ok = true;
    }
    return ok;
}

void solve()
{
    string s;
    cin >> s;
    set<char> st;
    for(int i = 0; i < s.sz; i++){
        st.insert(s[i]);
    }
    if(st.sz == 1){
        cout << "NO SOLUTION" << endl;
        return;
    }
    if(isPal(s)){
        for(int i = 0; i < s.sz - 1; i++){
            cout << s[i];
        }
    }
    else{
        cout << s << endl;
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
