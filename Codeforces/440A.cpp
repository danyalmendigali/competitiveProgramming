#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

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

void solve() {
    int n;
    cin >> n;

    vector<bool> watched(n, false);

    for (int i = 0; i < n - 1; ++i) {
        int episode;
        cin >> episode;
        watched[episode - 1] = true;
    }

    for (int i = 0; i < n; ++i) {
        if (!watched[i]) {
            cout << i + 1 << endl;
            break;
        }
    }


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
