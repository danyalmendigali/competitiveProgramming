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

map<string, int> mp;
set<int> st;


void solve()
{
    int n, a1 = 0, a2 = 0;
    cin >> n;
    int a[n + 9];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 100)
        {
            a1++;
        }
        if (a[i] == 200)
        {
            a2++;
        }
    }
    if(a1 % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    if(a2 % 2 == 1 && a1 == 0){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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
