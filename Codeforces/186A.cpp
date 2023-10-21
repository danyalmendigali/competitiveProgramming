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
set<int> st;


void solve()
{
    mp.clear();
    string s1, s2;
    cin >> s1 >> s2;
    int a = 0;
    if(s1.sz != s2.sz)
    {
        cout << "NO" << endl;
        return;
    }
    vector<int> str;
    for(int i = 0; i < s1.sz; i++)
    {
        if(s1[i] != s2[i])
        {
            str.pb(s1[i]);
            str.pb(s2[i]);

            a++;
        }
    }
    sort(all(str));
    str.erase(unique(str.begin(), str.end()), str.end());
    ll size_str = str.sz;


    if(a == 2 && size_str == 2)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
