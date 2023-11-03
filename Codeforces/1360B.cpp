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

set<int> st1, st2;
int x[N];

void solve()
{
    int n;
    int ans = inf;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    sort(x + 1, x + n + 1);

    vector<int> dp;
    for(int i = 1; i < n; i++)
    {
        ans = min(ans, x[i + 1] - x[i]);
    }

    cout << ans << endl;








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
