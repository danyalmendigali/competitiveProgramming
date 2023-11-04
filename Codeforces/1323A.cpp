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
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> dp[i];
    }

    int a = 0;
    int b = -1;

    for (int i = 0; i < n; i++) {
        if (dp[i] % 2 == 0) {
            cout << "1\n" << i + 1 << "\n";
            a = -1;
            break;
        } else if (b == -1) {
            b = i;
        }
    }

    if (a == 0) {
        cout << "2\n" << b + 1 << " " << (b == 0 ? 2 : 1) << "\n";
    }
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
