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

void solve(){
    int n;
    int a = 1, b = 1, f = 1, res = 0;
    cin >> n;
    while(n >= f)
    {
        res = (a + b) % 10;
        a = b;
        b = res;
        f++;
    }
    cout << a << endl;




}
signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
