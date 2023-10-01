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

ll x[N];

void solve()
{
    int n, a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> x[i];

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 1 && x[i] % 2 == 1)
        {
            a++;
        }
        if(i % 2 == 0 && x[i] % 2 == 0)
        {
            b++;
        }
        if(i % 2 == 1 && x[i] % 2 == 0)
        {
            c++;
        }
        if(i % 2 == 0 && x[i] % 2 == 1)
        {
            d++;
        }
    }

    if(c == d)
    {
        cout << c << endl;
    }
    else
    {
        cout << -1 << endl;
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
