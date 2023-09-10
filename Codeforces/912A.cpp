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
    ll a, b;
    ll a1, b1, c1;

    cin >> a >> b;
    cin >> a1 >> b1 >> c1;

    ll result1 = a1 * 2 + b1;
    ll result2 = b1 + c1 * 3;

    ll yellow_deficit = max(0LL, result1 - a);
    ll blue_deficit = max(0LL, result2 - b);

    cout << yellow_deficit + blue_deficit << endl;


}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
