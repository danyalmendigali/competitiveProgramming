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
    int n, d;
    cin >> n >> d;
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int res = 0;

    for (int i = 1; i < n; i++) {
        if (b[i] <= b[i - 1]) {
            int diff = b[i - 1] - b[i];
            int steps = diff / d + 1;
            res += steps;
            b[i] += steps * d;
        }
    }

    cout << res << endl;


}


signed main()
{

    optimus_prime;

    solve();





    return 0;
}
