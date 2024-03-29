#include <cctype>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define maximum INT_MAX

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
    int n;
    cin >> n;
    vi p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    bool direct_horovod = true;
    for (int i = 0; i < n - 1; i++) {
        if (p[i] + 1 != p[i + 1] && !(p[i] == n && p[i + 1] == 1)) {
            direct_horovod = false;
            break;
        }
    }
    bool reverse_horovod = true;
    for (int i = 0; i < n - 1; i++) {
        if (p[i] - 1 != p[i + 1] && !(p[i] == 1 && p[i + 1] == n)) {
            reverse_horovod = false;
            break;
        }
    }

    if (direct_horovod || reverse_horovod) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
