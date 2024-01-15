#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>wha

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

set<int> st1, st2;

void solve()
{
    int n; cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == s2){
        cout << 0 << endl;
        return;
    }
    int res1 = 0, res2 = 0;
    for(int i = 0; i < s2.sz; i++){
        if(s1[i] == '0' && s2[i] == '1'){
            res1++;
        }
        if(s1[i] == '1' && s2[i] == '0'){
            res2++;
        }
    }
    cout << min(res1, res2) + abs(res1 - res2) << endl;
}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
