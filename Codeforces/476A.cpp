
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

void solve()
{
    ll a, n, b;
    cin >> n >> b;

    if(n % 2 == 0)
    {
        a = n / 2;
    }
    else
    {
        a = n / 2 + 1;
    }
    while(a <= n)
    {
        if(a % b == 0)
        {
            cout << a;
            return;
        }
        a -= 1;
        a += 2;
    }

    cout << - 1 << endl;
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
