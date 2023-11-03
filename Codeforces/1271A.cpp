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
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int sum = 0;

    if(e <= f){
        int mn = min(b, min(c, d));
        d -= mn;
        sum += mn * f;
        if(d != 0){
            int mn2 = min(d, a);
            sum += mn2 * e;
        }
    }

    if(e > f){
        int mn = min(d, a);
        d -= mn;
        sum += mn * e;
        if(d != 0){
            int mn2 = min(b, min(c, d));
            sum += mn2 * f;
        }
    }

    cout << sum << endl;
}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
         solve();





    return 0;
}
