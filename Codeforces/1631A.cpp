#include <bits/stdc++.h>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<int>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e5 + 5;
const ll inf = 1e9;
const ll INF = 1e9 + 9;
const ll mod = 1e9 + 7;

int x[N];
map<ll, ll> mp;

void solve()
{
    int n;
    cin >> n;
    vector<int> dp1(n), dp2(n);

    FOR(i, 0, n) cin >> dp1[i];
    FOR(i, 0, n) cin >> dp2[i];

    for(int i = 0; i < n; i++)
    {
        if(dp1[i] > dp2[i])
        {
            swap(dp1[i], dp2[i]);
        }
    }

    sort(all(dp1));
    sort(all(dp2));

    cout << dp1[n - 1] * dp2[n - 1] << endl;
}


signed main(){
    optimus_prime;

    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();











    return 0;
}
