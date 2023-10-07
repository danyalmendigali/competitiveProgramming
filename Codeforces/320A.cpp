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
    string s;
    cin >> s;

    for(ll i = s.sz - 1; i >= 0; i--)
    {
        if(s[i] == '4' && s[i - 1] == '4' && s[i - 2] == '1')
        {
            i -= 2;
        }
        else if(s[i] == '4' && s[i - 1] == '1')
        {
            i--;
        }
        else if(s[i] == '1')
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
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
