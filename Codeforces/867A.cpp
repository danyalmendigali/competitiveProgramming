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
map<ll, ll> mp;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int fs = 0, sf = 0;
    for(int i = 0; i < s.sz; i++)
    {
        if(s[i] == 'F' && s[i + 1] == 'S')
        {
            fs++;
        }
        if(s[i] == 'S' && s[i + 1] == 'F')
        {
            sf++;
        }
    }

    if(sf == fs)
    {
        cout << "NO";
        return;
    }
    if(sf > fs)
    {
        cout << "YES";
        return;
    }

    cout << "NO";

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
