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

map<ll, ll> mp;
set<char> st;
vector<bool> was;


void solve()
{
    int n, mx = -1, res = 1; cin >> n;
    int hours[n] , minutes[n];
    pair<int, int> p[n];

    for(int i = 0; i < n; i++){
        cin >> hours[i] >> minutes[i];
        p[i].F = hours[i] , p[i].S = minutes[i];
    }

    sort(p , p + n);

    for(int i = 1; i < n; i++)
    {
        if(p[i].F == p[i].F && p[i].S == p[i - 1].S)
        {
            res++;
        }
        else{
            mx = max(mx, res);
            res = 1;
        }
    }

    cout << max(mx, res) << endl;


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
