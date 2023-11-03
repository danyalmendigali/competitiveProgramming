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


ll countA = 0;


set<int> st;
map<int, int> mp;


void solve()
{
    string str = "0123456789";
    int n, k, tm = -1;
    string s;
    cin >> n >> k;
    int ans = 0, ans2 = 0;

    while(n--)
    {
        cin >> s;
        for(int i = 0; i <= k; i++)
        {
            tm = s.find(str[i]);
            if(tm != -1)
            {
                ans++;
                tm = -1;
            }
        }

        if(ans >= k + 1)
        {
            ans2++;
        }
        ans = 0;
    }

    cout << ans2 << endl;
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
