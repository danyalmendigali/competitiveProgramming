#include <cctype>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

pair<int, int> p[N];
set <int> st;

ll solve2(ll d) {
    string s = to_string(d);
    string ans = "";

    for (char c : s) {
        if (c != '0') {
            ans += c;
        }
    }

    return stoi(ans);
}

void solve()
{
    int a, b;
    cin >> a >> b;

    int res1 = a + b;
    int ax = solve2(a);
    int bx = solve2(b);
    int resx = solve2(res1);

    cout << (ax + bx == resx ? "YES" : "NO") << endl;





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
