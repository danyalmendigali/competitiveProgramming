#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(vec) vec.begin(), vec.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll unsigned long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;
const int N = 1;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ones = 0, zeros = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            zeros++;
        } else {
            ones++;
        }
    }

    int min_length = min(ones, zeros);

    cout << n - 2 * min_length << endl;
}


signed main() {
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;

    while(t--)
        solve();




    return 0;
}
