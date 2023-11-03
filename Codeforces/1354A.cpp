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

map<string, int> mp;
set<int> st;


void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a - b <= 0){
        cout << b << endl;
        return;
    }

    ll g = a - b;
    ll r, t, y, u;
    r = c - d;

    if(c == d && a - b > 0){
        cout << -1 << endl;
        return;
    }
    if(r == 0){
        t = g;
    }
    else
    {
        t = g / r;
    }
    if(g % r != 0){
        t++;
    }

    if(a > b && r <= 0){
        cout << -1 << endl;
        return;
    }

    cout << (t * c) + b << endl;

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
