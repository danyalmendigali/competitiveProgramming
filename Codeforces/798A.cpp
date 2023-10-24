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
const int size_dp = 6;


ll countA = 0;

set<int> st;
map<int, int> mp;

void solve()
{
    string s;
    cin >> s;
    int a = 0;
    for(int i = 0; i < s.sz; i++)
    {
        if(s[i] == s[s.sz - i - 1])
        {
            a++;
        }
    }

    a /= 2;
    if(a == s.sz / 2 && s.sz % 2 == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if(a + 1 == s.sz / 2)
    {
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
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();





    return 0;
}
