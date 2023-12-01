#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define F first
#define S second
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
    string str = "1234567890";
    string s;
    cin >> s;
    int index_first = str.find(s[0]);
    int index_second = str.find(s[1]);
    int index_third = str.find(s[2]);
    int index_fourth = str.find(s[3]);

    int res = 0;
    res += abs(0 - index_first);
    res += abs(index_first - index_second);
    res += abs(index_second - index_third);
    res += abs(index_third - index_fourth);

    cout << res + 4 << endl;



}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
