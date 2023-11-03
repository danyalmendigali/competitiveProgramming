#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const int square = 360;

set<int> st1, st2;


void solve()
{
    st1.clear(); st2.clear();
    string s;
    cin >> s;
    for(int i = 0; i < s.sz; i++)
    {
        if(s[i] == 'A' && s[i + 1] == 'B')
        {
            st1.insert(i);
        }
    }
    for(int i = 0; i < s.sz; i++)
    {
        if(s[i] == 'B' && s[i + 1] == 'A')
        {
            st2.insert(i);
        }
    }

    int g = 0;

    for(auto s : st1)
    {
        for(auto s2 : st2)
        {
            if(abs(s - s2) > 1)
            {
                  cout << "YES" << endl;
                  return;
            }
        }
    }
    cout << "NO" << endl;


}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
        solve();


    return 0;
}
