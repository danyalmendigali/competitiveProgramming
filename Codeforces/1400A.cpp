#include <bits/stdc++.h>
#include <algorithm>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define ins(a) insert(a)
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

int x[N];
map<ll ,ll> mp;

void solve()
{
    string str; int n; cin >> n; cin >> str;
    for(int i = 0; i < str.sz; i++)
    {
        if(i % 2 == 0)
        {
            cout << str[i];
        }
    }
}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();





    return 0;
}
