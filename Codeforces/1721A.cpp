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

bool prime(int n)
{
    if(n < 2) return false;
    for(int x = 2; x * x <= n; x++)
    {
        if(n % x == 0) return false;
    }

    return true;
}

void solve()
{
    string s, s1;
    cin >> s;
    cin >> s1;
    vector<char> dp;
    dp.pb(s[0]);
    dp.pb(s[1]);
    dp.pb(s1[0]);
    dp.pb(s1[1]);

    sort(all(dp));
    dp.erase(unique(all(dp)), dp.end());


    cout << dp.sz - 1 << endl;


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

