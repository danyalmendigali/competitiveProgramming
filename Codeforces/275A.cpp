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
    int presses[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> presses[i][j];
        }
    }

    int res[3][3] = {1};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            res[i][j] = (res[i][j] + presses[i][j]) % 2;
            if (i > 0) res[i - 1][j] = (res[i - 1][j] + presses[i][j]) % 2;
            if (i < 2) res[i + 1][j] = (res[i + 1][j] + presses[i][j]) % 2;
            if (j > 0) res[i][j - 1] = (res[i][j - 1] + presses[i][j]) % 2;
            if (j < 2) res[i][j + 1] = (res[i][j + 1] + presses[i][j]) % 2;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << res[i][j];
        }
        cout << endl;
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
