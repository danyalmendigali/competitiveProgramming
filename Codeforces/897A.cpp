#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
map<int , int> mp;
vector<ll> v, v1;

void solve() {
    mp.clear();
    ll n, m; cin >> n >> m;
    string s; cin >> s;
    for(ll i = 0; i < m; i++){
        ll a, b; cin >> a >> b;
        char str1, str2; cin >> str1 >> str2;

        for(ll i = a - 1; i < b; i++)
        {
            if(s[i] == str1)
            {
                s[i] = str2;
            }
        }
    }

    cout << s << endl;


}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();



    return 0;
}
