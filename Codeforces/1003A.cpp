#include <bits/stdc++.h>
#include <algorithm>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define ins(a) insert(a)
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

ll x[N];
map <int , int> mp;

void solve()
{
    int n , mx = 0;  cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        mp[x[i]]++;
        mx = max(mx, mp[x[i]]);
    }

    cout << mx << endl;





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
