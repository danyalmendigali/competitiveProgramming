#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
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
    int n;
    cin >> n;

    vector<int> a(2 * n);
    vector<int> used(n, 0);
    vector<int> p;

    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 2 * n; i++) {
        if (used[a[i] - 1] == 0) {
            p.push_back(a[i]);
            used[a[i] - 1] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << p[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

signed main()
{

    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();





    return 0;
}
