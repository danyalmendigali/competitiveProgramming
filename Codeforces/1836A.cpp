#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

set<int> st;
map<ll , ll> mp;
map <ll, ll> mp1 , mp2;
vector<ll> v, v1;

void solve()
{
    int n; cin >> n;
    mp1.clear(); st.clear();
    int x[n + 9];
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
        if(x[i] != 0)
        {
            st.insert(x[i]);
        }
        mp[x[i]]++;
    }

    for(auto str : st)
    {
        if(mp[str] > mp[str - 1])
        {
            cout << "NO" << endl;
            st.clear();
            return;
        }
    }


    cout << "YES" << endl;
}

signed main()
{
    ios;
    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();




    return 0;
}
