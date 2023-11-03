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

set<int> st;
map<int, int> mp;


void solve()
{
    mp.clear(); st.clear();
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> p;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        p.push_back({a, i});
    }

    sort(p.begin(), p.end());

    vector<int> ans;
    int res = 0;

    for (int i = 0; i < n; i++) {
        if (res + p[i].F <= k)
        {
            ans.push_back(p[i].S);
            res += p[i].F;
        }
        else
        {
            break;
        }
    }

    cout << ans.sz << endl;

    for (int i = 0; i < ans.sz; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;



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
