#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

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
const int day = 7;

ll a[N][N];
ll countA = 0;

map<ll ,ll> mp;

void solve()
{
    ll a, b;
    cin >> a >> b;

    cout << a << endl;
    cout << b << endl;

    if(a > b)
    {
        cout << ">" << endl;
    }
    else if(a < b)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }



}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}
