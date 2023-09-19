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

bool prime(int n)
{
    if(n < 2) return false;
    for(int x = 2; x * x <= n; x++)
    {
        if(n % x == 0) return false;
    }

    return true;
}

void solve()
{

    int a, b;
    cin >> a >> b;

    int g = a;

    for(int i = 0; i < 50; i++)
    {
        g++;
        if(prime(g))
        {
           if(g == b)
           {
               cout << "YES" << endl;
             return;
           }
           else
           {
               cout << "NO" << endl;
               return;
           }
        }
    }

    if(a < b && prime(b))
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

    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();





    return 0;
}

