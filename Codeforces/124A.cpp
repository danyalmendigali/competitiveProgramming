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
    int n , a , b;
    cin >> n >> a >> b;

    int mx = -1;
    for (int i = 0; i < n; ++i) {
        mx = max(mx , n - b);
    }
    int ans = max(a + 1, n - b);
    cout << n - ans + 1 << "\n";


}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
