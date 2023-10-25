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


ll countA = 0;

set<int> st;
map<int, int> mp;


void solve()
{
    mp.clear(); st.clear();
    ll r, g, b2;
    cin >> r >> g >> b2;
    int a = max(r, max(g, b2));
    int b = min(r, min(g, b2));
    int c = (r + g + b2) - (a + b);
    int sum = 0;

    cout << min(b + c, (b + c + a) / 2) << endl;



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
