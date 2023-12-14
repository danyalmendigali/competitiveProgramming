#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
#include <map>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using namespace std;


void solve()
{
        int n;
    cin >> n;

    char str[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> str[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int res = 0;
            if (i > 0 && str[i - 1][j] == 'o') {
                res++;
            }
            if (i < n - 1 && str[i + 1][j] == 'o') {
                res++;
            }
            if (j > 0 && str[i][j - 1] == 'o') {
                res++;
            }
            if (j < n - 1 && str[i][j + 1] == 'o') {
                res++;
            }
            if (res % 2 != 0) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();




    return 0;
}
