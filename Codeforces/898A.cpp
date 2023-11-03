#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define pb(a) push_back(a)
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;



void solve()
{
    ll n;
    cin >> n;
    int a = n % 10;
    if(a <= 5)
    {
        n -= a;
    }
    if(a > 5)
    {
        n += 10 - a;
    }
    cout << n << endl;
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
