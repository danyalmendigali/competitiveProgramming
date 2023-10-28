#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const int square = 360;

void solve() {
    vector<vector<char>> matrix(4, vector<char>(4));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int blackCount = 0;
            int whiteCount = 0;
            for (int x = i; x <= i + 1; x++) {
                for (int y = j; y <= j + 1; y++) {
                    if (matrix[x][y] == '#') {
                        blackCount++;
                    } else {
                        whiteCount++;
                    }
                }
            }
            if (blackCount >= 3 || whiteCount >= 3) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while (t--)
         solve();


    return 0;
}
