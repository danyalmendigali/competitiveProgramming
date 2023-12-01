#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false)

using namespace std;


const ll inf = 1e9 + 9;
const ll INF = 1e15 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int res = 0;
    for(int i = 0; i < n; i++){
        if((s[i] - '0') % 2 == 0){
            res += (i + 1);
        }
    }
    cout << res << endl;

}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
