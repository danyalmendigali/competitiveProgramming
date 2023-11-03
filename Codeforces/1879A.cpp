
#include <iostream>
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



void solve() {
    int n;
    cin >> n;
    int x, y;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[i] = {x, y};
    }

    vector<pair<int, int>> ans;
    for(int i = 0; i < n; i++)
    {
        if(a[i].S >= a[0].S)
        {
            ans.push_back(a[i]);
        }
    }
    int mx = 0;
    for(int i = 1; i < ans.sz; i++)
    {
        mx = max(mx, ans[i].F);
    }

    if(ans[0].F > mx)
    {
        cout << ans[0].F << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

signed main()
{

    optimus_prime;
    ll t;
    t = 1;
    cin >> t;
    while(t--)
        solve();





    return 0;
}
