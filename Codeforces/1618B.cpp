#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define Mendigali ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

set<int> st;
map<string , int> mp;
map <ll, ll> mp1 , mp2;
vector<ll> v, v1;

void solve() {
    int n;
    cin >> n;
    vector<string> dp(n - 2);
    for (int i = 0; i < n - 2; i++) {
        cin >> dp[i];
    }

    char a = dp[0][0];
    char b = dp[n - 3][1];

    string s = "";
    s += a;
    for (int i = 0; i < n - 3; i++) {
        s += dp[i][0];
    }
    s += b;

    cout << s << endl;
}

signed main()
{
    Mendigali;
    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();




    return 0;
}
