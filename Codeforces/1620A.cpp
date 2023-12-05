#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define F first
#define S second
#define pb(a) push_back(a)
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve()
{
    string s; cin >> s;
    int res = 0;
    for(int i = 0; i < s.sz; i++){
        if(s[i] == 'N')
        {
            res++;
        }
    }
    cout << (res == 1 ? "NO" : "YES") << endl;
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
