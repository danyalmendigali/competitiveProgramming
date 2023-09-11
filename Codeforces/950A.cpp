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
    int l, r, a;
    cin >> l >> r >> a;

    int mx = 0;
    for (int i = 0; i <= a; i++) {
        int tl = l + i;
        int tr = r + a - i;

        mx = max(mx, min(tl, tr) * 2);
    }

    cout << mx << endl;
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
