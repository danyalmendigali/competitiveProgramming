#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int res = 0;
    for(int i = 0; i < s.sz; i++){
        if(s[i] == '>'){
            break;
        }
        res++;
    }

    for(int i = s.sz - 1; i >= 0; i--){
        if(s[i] == '<'){
            break;
        }
        res++;
    }
    cout << res << endl;
}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
