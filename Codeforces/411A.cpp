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
map<string , int> mp;
map <ll, ll> mp1 , mp2;
vector<ll> v, v1;

void solve()
{
    string s; cin >> s;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < s.sz; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            a++;
        }
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            b++;
        }
        if(s[i] >= '0' && s[i] <= '9')
        {
            c++;
        }
    }

    if(s.sz >= 5 && a != 0 && b != 0 && c != 0)
    {
        cout << "Correct";
        return;
    }
    cout << "Too weak";
}

signed main()
{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();




    return 0;
}
