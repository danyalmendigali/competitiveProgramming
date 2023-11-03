#include <cctype>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define maximum INT_MAX

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

const int SIZE = 11;

pair<int, int> p[N];

void solve()
{
    int n;
    int res = 0;
    cin>> n;
    vector<int> dp(n);
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    for(int i = 0; i < dp.sz; i++)
    {
        cin >> dp[i];
        if(dp[i] == 1)
        {
            a1++;
        }
        if(dp[i] == 2)
        {
            a2++;
        }
        if(dp[i] == 3)
        {
            a3++;
        }
        if(dp[i] == 4)
        {
            a4++;
        }
    }

    if(a1 == n)
    {
        if(a1 % 4 == 0)
        {
            cout << a1 / 4 << endl;
            return;
        }
        else
        {
            cout << a1 + 1 / 4 << endl;
            return;
        }

    }

    res += a4;
    int mn = min(a1, a3);
    res += mn;
    a1 -= mn;
    a3 -= mn;
    res += a1;
    res += a3;

    if(a2 % 2 == 0)
    {
        res += a2 / 2;
    }
    if(a2 % 2 != 0)
    {
        res += 1;
    }

    cout << res << endl;



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
