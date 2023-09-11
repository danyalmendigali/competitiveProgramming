#include <bits/stdc++.h>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;


void solve()
{
    ll n, a = 1;
    cin >> n;
    if(n == 0)
    {
        cout << 1 << endl;
        return;
    }
    if(n % 2 == 1)
    {
        cout << 8 << endl;
        return;
    }
    if(n % 2 == 2)
    {
        cout << 4 << endl;
        return;
    }
    if(n % 2 == 3)
    {
        cout << 8 << endl;
        return;
    }
    else
    {
        cout << 6 << endl;
        return;
    }



}


signed main()
{
    optimus_prime;


    solve();




    return 0;
}
