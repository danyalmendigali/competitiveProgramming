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
    ll n, k, a, b, c, a1, b1, c1, a2 = 0, b2 = 0, c2 = 0;
    cin >> n >> k;
    a1 = n * 2;
    b1 = n * 5;
    c1 = n * 8;

    //cout << a1 << " " << b1 << " " << c1;

    if(a1 % k != 0)
    {
        a2 = 1;
    }
    if(b1 % k != 0)
    {
        b2 = 1;
    }
    if(c1 %  k != 0)
    {
        c2 = 1;
    }

    a = (a1 / k) + a2;
    b = (b1 / k) + b2;
    c = (c1 / k) + c2;

    cout << a + b + c << endl;



}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
