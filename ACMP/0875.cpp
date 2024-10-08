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

int inv(vector<vector<char>>& a, int i, int j, int n, int m) {
    int res = 0;
    for (int x = -1; x <= 1; x++) {
        for (int y = -1; y <= 1; y++) {
            if (x == 0 && y == 0) continue;
            int ni = (i + x + n) % n;
            int nj = (j + y + m) % m;
            if (a[ni][nj] == '*') res++;
        }
    }


    return res;
}


void solve()
{
       int n, m, k; cin >> n >> m >> k;
       vector<vector<char>> mrx(n, vector<char>(m));

       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cin >> mrx[i][j];
              }
       }
       while(k--)
       {
              vector<vector<char>> new_m = mrx;
              for(int i = 0; i < n; i++){
                     for(int j = 0; j < m; j++){
                            int cnt = inv(mrx, i, j, n, m);
                            if(mrx[i][j] == '.' && cnt == 3){
                                   new_m[i][j] = '*';
                            }
                            else if(mrx[i][j] == '*' && (cnt < 2 || cnt > 3)){
                                   new_m[i][j] = '.';
                            }
                     }
              }
              mrx = new_m;
       }


       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cout << mrx[i][j] << "";
              }
              cout << endl;
       }



}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
