#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
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
#define Mendigali_Daniyal ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)

void mendigali()
{
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cin >> a[i][j];
              }
        }

        int mx = 0;

        for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     int sum = 0;
                     for(int x = i, y = j; x >= 0 && y >= 0; x--, y--) sum += a[x][y];
                     for(int x = i + 1, y = j + 1; x < n && y < m; x++, y++) sum += a[x][y];

                     for(int x = i, y = j; x >= 0 && y < m; x--, y++) sum += a[x][y];
                     for(int x = i + 1, y = j - 1; x < n && y >= 0; x++, y--) sum += a[x][y];

                     sum -= a[i][j];

                     mx = max(mx, sum);
              }
        }


        cout << mx << endl;

}

signed main()
{
       Mendigali_Daniyal;
       int t;
       t = 1;
       cin >> t;
       while(t--) mendigali();



       return 0;
}
