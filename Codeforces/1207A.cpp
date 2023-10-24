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
const int size_dp = 6;


ll countA = 0;

set<int> st;
map<int, int> mp;

void solve()
{
        int b, p, f;
        cin >> b >> p >> f;
        int h, c;
        cin >> h >> c;

        int mx_p = 0;

        for (int i = 0; i <= b; i++) {
            int mx = min(i / 2, p);
            int mx_c = min((b - 2 * mx) / 2, f);
            int res = mx * h + mx_c * c;
            mx_p = max(mx_p, res);
        }

        cout << mx_p << endl;



}

signed main()
{
    optimus_prime;
    int t;
    cin >> t;
    while(t--)
        solve();





    return 0;
}
