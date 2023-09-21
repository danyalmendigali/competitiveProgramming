#include <cctype>
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

pair<int, int> p[N];

void solve()
{
    int n;
    cin >> n;
    int indexMn;
    vector<int> dp(n);
    FOR(i, 0, n) cin >> dp[i];

    int mn = dp[0];
    FOR(i, 0, n)
    {
        if(dp[i] <= mn)
        {
            mn = dp[i];
            indexMn = i;
        }
    }



    ll h = 1;
    FOR(i, 0, n)
    {
        if(i == indexMn)
        {
            dp[indexMn]++;
        }
    }

    FOR(i, 0, n)
    {
        h *= dp[i];
    }


    cout << h << endl;





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
