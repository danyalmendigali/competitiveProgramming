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
ll a, b;

set<int> st;
map<int, int> mp;

void solve()
{
    mp.clear();
    int n;
    cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++)
    {
        cin >> dp[i];
        mp[dp[i]]++;
    }
    int a = 0;

    for(auto i : mp){
        if(i.S > ((n + 1) / 2))
        {
            a++;
        }
    }

    if(a == 0) {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}
