
#include <iostream>
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

map<char, int> mp;

void solve()
{
        int n, k, x; cin >> n >> k >> x;
        if (k == 1 || n == 2 * x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
            vector<int> dp;
            for (int i = 1; i <= k && dp.sz < n - x; ++i) {
                if (i != x) {
                    dp.pb(i);
                }
            }
            cout << dp.sz << endl;
            for (int num : dp) {
                cout << num << " ";
            }
            cout << endl;
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
