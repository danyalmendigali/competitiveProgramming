#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

void apply_operation(vector<vector<int>>& a, int i, int j) {
           a[i][j] = (a[i][j] + 1) % 3;
           a[i][j + 1] = (a[i][j + 1] + 2) % 3;
           a[i + 1][j] = (a[i + 1][j] + 2) % 3;
           a[i + 1][j + 1] = (a[i + 1][j + 1] + 1) % 3;
}

void solve()
{
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                a[i][j] = ch - '0';
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                b[i][j] = ch - '0';
            }
        }

        bool ok = true;
        for (int i = 0; i < n-1; ++i) {
            for (int j = 0; j < m-1; ++j) {
                while (a[i][j] != b[i][j]) {
                    apply_operation(a, i, j);
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if (a[i][m-1] != b[i][m-1]) {
                ok = false;
                break;
            }
        }
        for (int j = 0; j < m; ++j) {
            if (a[n-1][j] != b[n-1][j]) {
                ok = false;
                break;
            }
        }

        if (ok){
            cout << "YES" << endl;
        }
         else{
            cout << "NO" << endl;
        }




}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
